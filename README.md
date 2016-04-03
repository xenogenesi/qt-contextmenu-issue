# qt-contextmenu-issue
just a test about how contextmenuevent is handled on different platforms


    ## to build with mxe and check with wine 
    #export PATH=/usr/lib/mxe/usr/bin/:$PATH
    #x86_64-w64-mingw32.static-qmake-qt5 -o Makefile test.pro

    mkdir build-arch
    cd build-arch
    qmake -o Makefile ../test.pro
    make

