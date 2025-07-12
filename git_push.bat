@echo off
cd /d "%~dp0"

echo Adding all changes...
git add .

for /f "tokens=1-3 delims=/.- " %%A in ("%date%") do set "datepart=%%C%%B%%A"
for /f "tokens=1-2 delims=:" %%D in ("%time%") do set "timepart=%%D%%E"
set "timepart=%timepart: =%"
set "commit_msg=rev. %datepart:~-8%_%timepart:~0,6%"

echo Creating commit with message: %commit_msg%
git commit -m "%commit_msg%"

echo Pushing to GitHub...
git push origin main

echo Done!