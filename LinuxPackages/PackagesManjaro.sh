## CIRCLECI
sudo snap install circleci

## COMPOSER
sudo pacman -Sy composer

## DIA
sudo pacman -Sy dia

## DEVILSPIE
sudo pacman -S devilspie || sudo pacman -Rs devilspie
mkdir -p ~/.devilspie

echo '
(if (contains (window_class) "Code")
	(begin
		(spawn_async (str "xprop -id " (window_xid) " -f _KDE_NET_WM_BLUR_BEHIND_REGION 32c -set _KDE_NET_WM_BLUR_BEHIND_REGION 0 "))
		(spawn_async (str "xprop -id " (window_xid) " -f _NET_WM_WINDOW_OPACITY 32c -set _NET_WM_WINDOW_OPACITY 0xD8000000"))
	)
)
' > ~/.devilspie/vscode_transparent.ds

## DOCKER
sudo pacman -Sy docker
sudo chmod 666 /var/run/docker.sock

## GEOIP CONFIGURATION
sudo pacman-mirrors -g --geoip

## GIT
sudo pacman -Sy git
git config --global user.name "Wesley Flôres"
git config --global user.email wesleyfloresterres@gmail.com

## HTOP
sudo pacman -Sy htop

## LIBREPCB
sudo snap install librepcb

## LOLCAT
sudo pacman -Sy lolcat

## MLOCATE
sudo pacman -Sy mlocate

## MYSQL
sudo pacman -Sy mariadb
rm -Rf /var/lib/mysql/*
sudo mysql_install_db --user=mysql --basedir=/usr --datadir=/var/lib/mysql
sudo systemctl enable mariadb.service
sudo systemctl start mariadb.service
sudo mysql --user root

## NODE
snap install --edge node
sudo systemctl enable --now snapd.socket
sudo ln -s /var/lib/snapd/snap /snap
snap install --edge node --classic

## P7ZIP
sudo pacman -Sy p7zip

## PHP
sudo pacman -Sy php php-apache php-cgi php-fpm php-gd php-embed php-intl php-imap php-redis php-snmp php-pgsql

## xdebug (PHP EXTENSION)
sudo pacman -Sy xdebug
# UNCOMMENT CONTENT FILE IN: /etc/php/conf.d/xdebug.ini
php -r "var_dump(extension_loaded('xdebug'));"

## POSTGRES
sudo pacman -Sy postgresql postgis python-psycopg2 libpqxx
sudo mkdir -m 0700 -p '/var/lib/postgres/data'
sudo chown postgres '/var/lib/postgres/data'
sudo -i -u postgres
initdb --locale $LANG -E UTF8 -D '/var/lib/postgres/data/'
exit
systemctl enable postgresql.service
systemctl start postgresql.service
systemctl status postgresql.service

## PGADMIN4
sudo pacman -Sy pgadmin4
sudo -i -u postgres
psql
ALTER USER postgres WITH PASSWORD 'postgres';

## QBITTORRENT
sudo pacman -Sy qbittorrent

## TMUX
sudo pacman -Sy tmux

## UNRAR
sudo pacman -Sy unrar

## VIRTUAL BOX
sudo pacman -S linux$(uname -r | cut -c 1,3)-virtualbox-host-modules
sudo /sbin/rcvboxdrv setup

## VISUAL STUDIO CODE
yay -S visual-studio-code-bin
sudo chown -R $(whoami) /opt/visual-studio-code
sudo chown -R root /opt/visual-studio-code

## YAY
sudo pacman -Su yay

## YOUTUBE-DL
sudo pacman -Sy youtube-dl

## WORKBENCH
sudo pacman -Sy mysql-workbench
