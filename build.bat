set PATH=%PATH%;C:\QT\5.3.2\bin
qmake *.pro
mingw32-make -j8 -f Makefile.Release
pause