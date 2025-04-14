#!/bin/sh

# Обновление системы
sudo apt update -y
sudo apt upgrade -y

# Установка необходимых пакетов
sudo apt install build-essential libgtk-3-dev gdb wget libsqlite3-dev -y

# Удаление старой сборки wxWidgets
rm -Rf wxWidgets-3.2.6

# Скачивание wxWidgets
wget https://github.com/wxWidgets/wxWidgets/releases/download/v3.2.6/wxWidgets-3.2.6.tar.bz2
tar xf wxWidgets-3.2.6.tar.bz2

# Переход в директорию wxWidgets
cd wxWidgets-3.2.6

# Создание каталога сборки
mkdir buildgtk
cd buildgtk

# Конфигурация с поддержкой Unicode и без использования библиотек
../configure --with-gtk --disable-shared --enable-monolithic --enable-unicode

# Компиляция wxWidgets
make -j$(nproc --all)

# Установка
sudo make install
sudo ldconfig

# Возврат в корневую директорию и очистка
cd ../..
rm wxWidgets-3.2.6.tar.bz2
