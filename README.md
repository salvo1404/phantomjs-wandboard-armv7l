phantomjs-wandboard-armv7
=========================

PhantomJS 1.9.2 compiled on a WandBoard Quad (Ubuntu Linaro 11.10).

PhantomJS is a headless WebKit with JavaScript API. It has fast and native support for various web 
standards: DOM handling, CSS selector, JSON, Canvas, and SVG. (http://phantomjs.org).

Build Process
-------------

PhantomJS has been built using the process described below.


1. According to [PhantomJS build instruction](http://phantomjs.org/build.html).:

        $ sudo apt-get update
        $ sudo apt-get install build-essential chrpath git-core libssl-dev libfontconfig1-dev
        $ git clone git://github.com/ariya/phantomjs.git
        $ cd phantomjs
        $ git checkout 1.9

2. Download additional 3rdparty files:

        $ mkdir src/qt/src/3rdparty/pixman && pushd src/qt/src/3rdparty/pixman && curl -O http://qt.gitorious.org/qt/qt/blobs/raw/4.8/src/3rdparty/pixman/README && curl -O http://qt.gitorious.org/qt/qt/blobs/raw/4.8/src/3rdparty/pixman/pixman-arm-neon-asm.h && curl -O http://qt.gitorious.org/qt/qt/blobs/raw/4.8/src/3rdparty/pixman/pixman-arm-neon-asm.S; popd

3. Open `./build.sh` and delete lines 11-34:
        
        .. ...
        11 if [[ "$MAKEFLAGS" != "" ]]; then
        12 MAKEFLAGS_JOBS=$(echo $MAKEFLAGS | egrep -o '\-j[0-9]+' | egrep -o '[0-9]+')
        .. ...
        34 fi
        .. ...
        
4. Open `./src/qt/preconfig.sh` and add the following options to QT_CFG after ' -no-stl':

        .. ...
        29 QT_CFG+=' -no-exceptions'       # Do not use C++ exception
        30 QT_CFG+=' -no-stl'              # No need for STL compatibility
        31 QT_CFG+=' -no-pch'
        32 QT_CFG+=' -no-mmx'
        33 QT_CFG+=' -no-3dnow'
        34 QT_CFG+=' -no-sse'
        35 QT_CFG+=' -no-sse2'
        36 QT_CFG+=' -no-sse3'
        37 QT_CFG+=' -no-ssse3'
        38 QT_CFG+=' -no-sse4.1'
        39 QT_CFG+=' -no-sse4.2'
        40 QT_CFG+=' -no-avx'
        .. ...
        
5. Open `./src/qt/config.tests/qpa/wayland/wayland.cpp` and comment the line 41:
        
        .. ...
        //#include <wayland-client.h>
        .. ...
        
6. Start the compilation
        
        $ nohup ./build.sh --confirm > build.sh.out 2> build.sh.err &

