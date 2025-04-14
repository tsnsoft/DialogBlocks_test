@echo off
@echo Project assembly, please wait...
@del /Q linux_app > NUL 2>&1
@wsl `wx-config --cxx --cxxflags` -o linux_app *.cpp `wx-config --libs` -lsqlite3
@echo Done