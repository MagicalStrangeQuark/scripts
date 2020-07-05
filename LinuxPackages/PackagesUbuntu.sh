## 7ZIP
sudo apt update && sudo apt upgrade
sudo apt-get update && sudo apt-get install p7zip-full p7zip-rar

## CALIBRE
sudo apt update && sudo apt upgrade
sudo apt install calibre

## COMPOSER
sudo apt update && sudo apt upgrade
sudo apt install composer

## FIREFOX
sudo add-apt-repository ppa:mozillateam/firefox-next
sudo apt update && sudo apt upgrade
sudo apt install firefox

## GIMP
sudo add-apt-repository ppa:otto-kesselgulasch/gimp
sudo apt update && sudo apt upgrade
sudo apt install gimp

## GIT
sudo apt update && sudo apt upgrade
sudo apt install git

## GNOME SCREENSHOT
sudo apt update && sudo apt upgrade
sudo apt-get install gnome-screenshot

## HTOP
sudo apt update && sudo apt upgrade
sudo apt install htop

## LIBREOFFICE
sudo add-apt-repository ppa:libreoffice/ppa
sudo apt update && sudo apt upgrade
sudo apt install libreoffice

## NVM
sudo apt update && sudo apt upgrade
wget -qO- https://raw.githubusercontent.com/nvm-sh/nvm/v0.35.0/install.sh | bash

## NPM
sudo apt update && sudo apt upgrade
sudo apt install npm

## ELETRON
sudo apt update && sudo apt upgrade
npm install -g electron

## NODE
sudo apt update && sudo apt upgrade
nvm install --lts
nvm use --lts

## PGSQL DRIVER
sudo apt update && sudo apt upgrade
sudo apt install php7.2-pgsql

## PHP
sudo apt update && sudo apt upgrade
sudo apt install php
sudo apt install php-xml

## RAR
sudo apt update && sudo apt upgrade
sudo apt install unrar

## TRANSMISSION
sudo apt update && sudo apt upgrade
sudo apt install transmission

## VIM
sudo add-apt-repository ppa:jonathonf/vim
sudo apt update && sudo apt upgrade
sudo apt install vim

## VIRTUAL BOX
wget -q https://www.virtualbox.org/download/oracle_vbox_2016.asc -O- | sudo apt-key add -
wget -q https://www.virtualbox.org/download/oracle_vbox.asc -O- | sudo apt-key add -
sudo apt update && sudo apt upgrade
sudo apt-get install virtualbox-5.2

## YOUTUBE-DL
sudo apt update && sudo apt upgrade
sudo apt-get install youtube-dl