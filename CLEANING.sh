#!/bin/bash

# Удаляем файлы с расширениями .bak, .sln, .vcxproj и другие
for f in *.bak *.sln *.vcxproj *.vcxproj.user makefile.gcc Makefile linux_app *-autosave.pjd *.rc; do
    if [ -f "$f" ]; then
        rm -f "$f"
    fi
done

# Удаляем директории, если они существуют
for d in Debug MinGWUnicodeDebug MinGWUnicodeRelease Release; do
    if [ -d "$d" ]; then
        rm -rf "$d"
    fi
done

echo "Cleaning of project configurations is completed."
