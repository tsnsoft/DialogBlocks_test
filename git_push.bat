@echo off
cd /d "%~dp0"

echo Adding all changes...
git add .

for /f "tokens=2 delims==." %%I in ('wmic os get localdatetime /value') do set datetime=%%I
set commit_msg=rev. %datetime%

echo Creating commit...
git commit -m "%commit_msg%"

echo Pushing to GitHub...
git push origin main

echo Done!
