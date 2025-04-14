@echo off

:: Устанавливаем путь к wxWidgets
set WX_DIR=D:\Development\RedPanda-CPP\wxWidgets
:: Устанавливаем путь к платформе С++
set MINGW_DIR=D:\Development\RedPanda-CPP\mingw64
:: Устанавливаем имя утилиты сборки
set MAKE_TOOL=mingw32-make.exe

:: Устанавливаем путь сборки (НЕ МЕНЯЙТЕ ЭТО!)
set BUILD_DIR=%WX_DIR%\build\msw
:: Добавляем путь к компилятору в переменную PATH
set PATH=%MINGW_DIR%\bin;%PATH%

:: Переходим в папку для сборки
cd /d %BUILD_DIR%

:: Сборка релизной версии
echo Building release version...
%MAKE_TOOL% -f makefile.gcc BUILD=release SHARED=0 UNICODE=1
 
:: Сборка отладочной версии
echo Building debug version...
%MAKE_TOOL% -f makefile.gcc BUILD=debug SHARED=0 UNICODE=1

:: Возвращаемся в исходную папку
cd /d %~dp0
