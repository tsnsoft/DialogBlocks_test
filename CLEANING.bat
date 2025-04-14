@echo off
setlocal enabledelayedexpansion

for %%f in (*.bak) do del /Q /F "%%f" >nul 2>&1
for %%f in (*.sln) do del /Q /F "%%f" >nul 2>&1
for %%f in (*.vcxproj) do del /Q /F "%%f" >nul 2>&1
for %%f in (*.vcxproj.user) do del /Q /F "%%f" >nul 2>&1
for %%f in (makefile.gcc) do del /Q /F "%%f" >nul 2>&1
for %%f in (Makefile) do del /Q /F "%%f" >nul 2>&1
for %%f in (linux_app) do del /Q /F "%%f" >nul 2>&1
for %%f in (*-autosave.pjd) do del /Q /F "%%f" >nul 2>&1
for %%f in (*.rc) do del /Q /F "%%f" >nul 2>&1

for %%d in (Debug MinGWUnicodeDebug MinGWUnicodeRelease Release) do (
    if exist "%%d" (
        rmdir /S /Q "%%d"
    )
)

echo Cleaning of project configurations is completed.
