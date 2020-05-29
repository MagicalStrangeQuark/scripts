## COMPOSER
sudo pacman -Sy composer

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

## GEOIP CONFIGURATION
sudo pacman-mirrors -g --geoip

## GIT
sudo pacman -Sy git
git config --global user.name "Wesley Flôres"
git config --global user.email wesleyfloresterres@gmail.com

## HTOP
sudo pacman -Sy htop

## LOLCAT
sudo pacman -Sy lolcat

## MYSQL

## NODE
snap install --edge node
sudo systemctl enable --now snapd.socket
sudo ln -s /var/lib/snapd/snap /snap
snap install --edge node --classic

## P7ZIP
sudo pacman -Sy p7zip

## PHP
sudo pacman -Sy php php-apache php-cgi php-fpm php-gd php-embed php-intl php-imap php-redis php-snmp php-pgsql

## POSTGRES
sudo pacman -Sy postgresql postgis
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

## VISUAL STUDIO CODE
yay -S visual-studio-code-bin

## YAY
sudo pacman -Su yay

## YOUTUBE-DL
sudo pacman -Sy youtube-dl