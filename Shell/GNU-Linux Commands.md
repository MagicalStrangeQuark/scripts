# !/bin/bash

## 🔏 SYSTEM INFO

    # SHOW THE CURRENT DATE AND TIME                                                                                            --> LINUX@ADMIN:~$ DATE
    # SHOW THE MOUNTH'S CALENDAR                                                                                                --> LINUX@ADMIN:~$ CAL
    # SHOW CURRENT UPTIME                                                                                                       --> LINUX@ADMIN:~$ UPTIME
    # DISPLAY WHO IS ONLINE                                                                                                     --> LINUX@ADMIN:~$ W
    # WHO YOU ARE LOGGED IN AS                                                                                                  --> LINUX@ADMIN:~$ WHOAMI
    # DISPLAY INFORMATION ABOUT USER                                                                                            --> LINUX@ADMIN:~$ FINGER USER
    # SHOW KERNEL INFORMATION                                                                                                   --> LINUX@ADMIN:~$ UNAME -A
    # CPU INFORMATION                                                                                                           --> LINUX@ADMIN:~$ CAT /PROC/CPUINFO
    # MEMORY INFORMATON                                                                                                         --> LINUX@ADMIN:~$ CAT /PROC/MEMINFO
    # SHOW DISK USAGE                                                                                                           --> LINUX@ADMIN:~$ DF -H
    # SHOW DIRECTORY SPACE USAGE                                                                                                --> LINUX@ADMIN:~$ DU
    # SHOW MEMORY AND SWAP USAGE                                                                                                --> LINUX@ADMIN:~$ FREE

## 🔏 KEYBOARD SHORTCUTS

    # RUN THE COMMAND                                                                                                           --> LINUX@ADMIN:~$ ENTER
    # SHOW THE PREVIOUS COMMAND                                                                                                 --> LINUX@ADMIN:~$ UP ARROW
    # ALLOWS YOU TO TYPE A PART OF THE COMMAND YOU'RE LOOKING FOR AND FINDS IT                                                  --> LINUX@ADMIN:~$ CTRL + R
    # STOPS THE CURRENT COMMAND, RESUME WITH FG IN THE FOREGROUND OR BG IN THE BACKGROUND                                       --> LINUX@ADMIN:~$ CTRL + Z
    # HALTS THE CURRENT COMMAND, CANCEL THE CURRENT OPERATION AND/OR START WITH A FRESH NEW LINE                                --> LINUX@ADMIN:~$ CTRL + C
    # CLEAR THE SCREEN                                                                                                          --> LINUX@ADMIN:~$ CTRL + L
    # ALLOWS THE SCROLLING OF THE BASH COMMAND WINDOW USING SHIFT + UP ARROW AND SHIFT + DOWN ARROW                             --> LINUX@ADMIN:~$ COMMAND | LESS
    # REPEATS THE LAST COMMAND                                                                                                  --> LINUX@ADMIN:~$ !!
    # REPEATS THE LAST ARGUMENT OF THE PREVIOUS COMMAND                                                                         --> LINUX@ADMIN:~$ COMMAND !$
    # INSERT THE LAST ARGUMENT OF THE PREVIOUS COMAND ON THE FLY, WHICH ENABLES YOU TO EDIT IT BEFORE EXECUTING THE COMMAND     --> LINUX@ADMIN:~$ ESC +. (A PERIOD)
    # RETURN TO THE START OF THE COMMAND YOU'RE TYPING                                                                          --> LINUX@ADMIN:~$ CTRL + A 
    # GO TO THE END OF THE COMMAND YOU'RE TYPING                                                                                --> LINUX@ADMIN:~$ CTRL + E
    # CUT EVERYTHING BEFORE THE CURSOR TO A SPECIAL CLIPBOARD, ERASES THE WHOLE LINE                                            --> LINUX@ADMIN:~$ CTRL + U
    # CUT EVERYTHING AFTER THE CURSOR TO A SPECIAL CLIPBOARD                                                                    --> LINUX@ADMIN:~$ CTRL + K
    # PASTE FROM THE SPECIAL CLIPBOARD THAT CTRL + U AND CTRL + K SAVE THEIR DATA TO                                            --> LINUX@ADMIN:~$ CTRL + Y
    # SWAP THE TWO CHARACTERS BEFORE THE CURSOR (YOU CAN ACTUALLY USE THIS TO TRANSPORT A CHARACTER FROM THE LEFT TO THE RIGHT) --> LINUX@ADMIN:~$ CTRL + T
    # DELETE THE WORD / ARGUMENT LEFT OF THE CURSOR IN THE CURRENT LINE                                                         --> LINUX@ADMIN:~$ CTRL + W
    # LOG OUT OF CURRENT SESSION, SIMILIAR TO EXIT                                                                              --> LINUX@ADMIN:~$ CTRL + D

## 🔏 LEARN THE COMMANDS

    # LIST MANUAL PAGES FOR SUBJECT                                                                                         --> LINUX@ADMIN:~$ APROPOS SUBJECT
    # DISPLAY MAN PAGES CONTAINING KEYWORD                                                                                  --> LINUX@ADMIN:~$ MAN -K KEYWORD
    # SHOW THE MANUAL FOR COMMAND                                                                                           --> LINUX@ADMIN:~$ MAN COMMAND
    # MAKE A PDF OF A MANUAL PAGE                                                                                           --> LINUX@ADMIN:~$ MAN -T MAN | PS2PDF -> MAN.PDF
    # SHOW FULL PATH NAME OF COMMAND                                                                                        --> LINUX@ADMIN:~$ WHICH COMMAND
    # SEE HOW LONG A COMMAND TAKES                                                                                          --> LINUX@ADMIN:~$ TIME COMMAND
    # SHOW POSSIBLE LOCATIONS OF APP                                                                                        --> LINUX@ADMIN:~$ WHEREIS APP
    # SHOW WHICH APP WILL BE RUN BY DEFAULT; IT SHOWS THE FULL PATH                                                         --> LINUX@ADMIN:~$ WHICH APP

## 🔏 SEARCHING

    # SEARCH FOR PATTERN IN FILES                                                                                               --> LINUX@ADMIN:~$ GREP PATTERN FILES
    # SEARCH RECURSIVELY FOR PATTERN IN DIR                                                                                     --> LINUX@ADMIN:~$ GREP -R PATTERN DIR
    # SEACH FOR PATTERN IN THE OUTPUT OF COMMAND                                                                                --> LINUX@ADMIN:~$ COMMAND | GREP PATTERN
    # FIND ALL INSTANCES OF FILE                                                                                                --> LINUX@ADMIN:~$ LOCATE FILE
    # STARTING WITH THE ROOT DIRECTORY, LOOK FOR THE FILE CALLED FILENAME                                                       --> LINUX@ADMIN:~$ FIND / -NAME FILENAME
    # FIND A FILE CALED FILENAME USING THE LOCATE COMMAND; THIS ASSUMES YOU HAVE ALREADY USED THE COMMAND UPDATEDB (SEET NEXT)  --> LINUX@ADMIN:~$ LOCATE FILENAME
    # CREATE OR UPDATE THE DATABASE OF FILES ON ALL FILE SYSTEMS ATTACHED TO THE LINUX ROOT DIRECTORY                           --> LINUX@ADMIN:~$ UPDATEDB
    # SHOW THE SUBDIRECTORY CONTAINING THE EXECUTABLE FILE CALLED FILENAME                                                      --> LINUX@ADMIN:~$ WHICH FILENAME
    # STARTING WITH THE DIRECTORY CALLED DIR, LOOK FOR AND LIST ALL FILES CONTAINING TEXTSTRINGTOFIND                           --> LINUX@ADMIN:~$ GREP TEXTSTRINGTOFIND /DIR

## 🔏 FILE PERMISSIONS

    # [7][DONO]R[4]W[2]X[1] [7][GRUPO]R[4]W[2]X[1] [7][TODOS]R[4]W[2]X[1]

    # CHANGE THE PERMISSIONS OF FILE TO OCTAL, WHICH CAN BE FOUND SEPARATELY FOR USER, GROUP AND WORLD BY ADDING: 4 - READ(R), 2 - WRITE(W), 1 - EXECUTE(X) --> LINUX@ADMIN:~$ CHMOD OCTAL FILE 
    # READ, WRITE, EXECUTE FOR ALL                                                                                            --> LINUX@ADMIN:~$ CHMOD 777      
    # RWX FOR OWNER, RX FOR GROUP AND WORLD                                                                                   --> LINUX@ADMIN:~$ CHMOD 755
    # FOR MORE OPTIONS, SEE MAN CHMOD                                                                                         --> LINUX@ADMIN:~$ MAN CHMOD

## 🔏 FILE COMMANDS

    # DIRECTORY LISTING                                                                                                --> LINUX@ADMIN:~$ LS
    # LIST FILES IN CURRENT DIRECTORY USING LONG FORMAT                                                                --> LINUX@ADMIN:~$ LS -L
    # LIST ALL FILES IN CURENT DIRECTORY IN LONG FORMAT AND DISPLAY IN COLUMNS                                         --> LINUX@ADMIN:~$ LS -LAC
    # LIST FILES IN CURRENT DIRECTORY AND INDICATE THE FILE TYPE                                                       --> LINUX@ADMIN:~$ LS -F
    # FORMATTED LISTING WITH HIDDEN FILES                                                                              --> LINUX@ADMIN:~$ LS -AL
    # CHANGE DIRECTORY OF DIR                                                                                          --> LINUX@ADMIN:~$ CD DIR
    # CHANGE TO HOME                                                                                                   --> LINUX@ADMIN:~$ CD
    # CREATE A DIRECTORY DIR                                                                                           --> LINUX@ADMIN:~$ MKDIR DIR
    # SHOW CURRENT DIRECTORY                                                                                           --> LINUX@ADMIN:~$ PWD
    # REMOVE A FILE OR DIRECTORY CALLED NAME                                                                           --> LINUX@ADMIN:~$ RM NAME
    # DELETE DIRECTORY DIR                                                                                             --> LINUX@ADMIN:~$ RM -R DIR
    # FORCE REMOVE FILE                                                                                                --> LINUX@ADMIN:~$ RM -F FILE
    # FORCE REMOVE AN ENTIRE DIRECTORY DIR AND ALL IT'S INCLUDED FILES AND SUBDIRECTORIES (USE WITH EXTREME CAUTION)   --> LINUX@ADMIN:~$ RM -RF DIR
    # COPY FILE1 TO FILE2                                                                                              --> LINUX@ADMIN:~$ CP FILE1 FILE2
    # COPY DIR1 TO DIR2; CREATE DIR2 IF IT DOESN'T EXIST                                                               --> LINUX@ADMIN:~$ CP -R DIR1 DIR2
    # COPY THE FILENAME CALLED FILE TO THE /HOME/DIRNAME DIRECTORY                                                     --> LINUX@ADMIN:~$ CP FILE /HOME/DIRNAME
    # MOVE THE FILE CALLED FILENAME TO THE /HOME/DIRNAME DIRECTORY                                                     --> LINUX@ADMIN:~$ MV FILE /HOME/DIRNAME
    # RENAME OR MOVE FILE1 TO FILE2; IF FILE2 IS AN EXISTING DIRECTORY, MOVES FILE1 INTO DIRECTORY FILE2               --> LINUX@ADMIN:~$ MV FILE1 FILE2
    # CREATE SYMBOLIC LINK LINK TO FILE                                                                                --> LINUX@ADMIN:~$ LN -S FILE LINK
    # CREATE OR UPDATE FILE                                                                                            --> LINUX@ADMIN:~$ TOUCH FILE
    # PLACES STANDARD INPUT INTO FILE                                                                                  --> LINUX@ADMIN:~$ CAT > FILE
    # DISPLAY THE FILE CALLED FILE                                                                                     --> LINUX@ADMIN:~$ CAT FILE
    # DISPLAY THE FILE CALLED FILE ONE PAGE AT A TIME, PROCEED TO NEXT PAGE USING THE SPACEBAR                         --> LINUX@ADMIN:~$ MORE FILE
    # OUTPUT THE FIRST 10 LINES OF FILE                                                                                --> LINUX@ADMIN:~$ HEAD FILE
    # DISPLAY THE FIRST 20 LINES OF THE FILE CALLED FILE                                                               --> LINUX@ADMIN:~$ HEAD -20 FILE
    # OUTPUT THE LAST 10 LINES OF FILE                                                                                 --> LINUX@ADMIN:~$ TAIL FILE
    # DISPLAY THE LAST 20 LINES OF THE FILE CALLED FILE                                                                --> LINUX@ADMIN:~$ TAIL -20 FILE
    # OUTPUT THE CONTENTS OF FILE AS IT GROWS, STARTING WITH THE LAST 10 LINES                                         --> LINUX@ADMIN:~$ TAIL -F FILE

## 🔏 COMPRESSION

    # CREATE A TAR NAMED FILE.TAR CONTAINING FILES      --> LINUX@ADMIN:~$ TAR CF FILE.TAR FILES
    # EXTRACT THE FILES FROM FILE.TAR                   --> LINUX@ADMIN:~$ TAR XF FILE.TAR

    # CREATE A TAR WITH GZIP COMPRESSION                --> LINUX@ADMIN:~$ TAR CZF FILE.TAR.GZ FILES
    # EXTRACT A TAR USING GZIP                          --> LINUX@ADMIN:~$ TAR XZF FILE.TAR.GZ

    # CREATE A TAR WITH BZIP2 COMPRESSION               --> LINUX@ADMIN:~$ TAR CJF FILE.TAR.BZ2 FILES
    # EXTRACT A TAR USING BZIP2                         --> LINUX@ADMIN:~$ TAR XJF FILE.TAR.BZ2

    # COMPRESSES WITH BZIP2 COMPRESSION                 --> LINUX@ADMIN:~$ BZIP2 FILE
    # EXTRACT THE FILES FROM FILE.BZ2                   --> LINUX@ADMIN:~$ BUNZIP2 FILE.BZ2

    # COMPRESSES FILE AND RENAMES IT TO FILE.GZ         --> LINUX@ADMIN:~$ GZIP FILE
    # DECOMPRESSES FILE.GZ BACK TO FILE                 --> LINUX@ADMIN:~$ GZIP -D FILE.GZ

    # COMPRESSES FILE WITH XZ COMPRESSION               --> LINUX@ADMIN:~$ TAR CJF FILE.TAR.XZ FILES
    # EXTRACT THE FILES FROM FILE.TAR.XZ                --> LINUX@ADMIN:~$ TAR XF FILE.TAR.XZ

    # COMPRESSES FILE WITH ZIP COMPRESSION              --> LINUX@ADMIN:~$ ZIP FILE
    # EXTRACT THE FILES FROM FILE.ZIP                   --> LINUX@ADMIN:~$ UNZIP FILE

    # CREATE A CPIO FILE FROM FILES REGEX WITH 'FILE*'  --> LINUX@ADMIN:~$ FIND ./ -NAME 'FILE*' | CPIO -O > BACKUP.CPIO
    # EXTRACT THE FILE FROM FILE.CPIO                   --> LINUX@ADMIN:~$ CPIO -I < FILE.CPIO

    # COMPRESS A CPIO WITH GZIP NAMED BACKUP.CPIO.GZ    --> LINUX@ADMIN:~$ FIND ./ -NAME 'arquivo*' | CPIO -O | GZIP > BACKUP.CPIO.GZ
    # EXTRAT THE FILE FROM FILE.CPIO.GZ (1)             --> LINUX@ADMIN:~$ GUNZIP -C FILE.CPIO.GZ | CPIO -I
    # EXTRAT THE FILE FROM FILE.CPIO.GZ (1)             --> LINUX@ADMIN:~$ GZIP -D FILE.CPIO.GZ && CPIO -i < FILE.CPIO
    
## 🔏 PRINTING (USA "+" PARA COLOCAR PERMISOS Y "-" PARA ELIMINAR)

    # START THE PRINT DAEMON                                               --> LINUX@ADMIN:~$ /ETC/RC.D/INIT.D/LPD START
    # STOP THE PRINT DAEMON                                                --> LINUX@ADMIN:~$ /ETC/RC.D/INIT.D/LPD STOP
    # DISPLAY STATUS OF THE PRINT DAEMON                                   --> LINUX@ADMIN:~$ /ETC/RC.D/INIT.D/LPD STATUS
    # DISPLAY JOBS IN PRINT QUEUE                                          --> LINUX@ADMIN:~$ LPQ
    # REMOVE JOBS FROM QUEUE                                               --> LINUX@ADMIN:~$ LPRM
    # PRINT A FILE                                                         --> LINUX@ADMIN:~$ LPR
    # PRINTER CONTROL TOOL                                                 --> LINUX@ADMIN:~$ LPC
    # PRINT THE MANUAL PAGE CALLED SUBJECT AS PLAIN TEXT                   --> LINUX@ADMIN:~$ MAN SUBJECT | LPR
    # PRINT THE MANUAL PAGE CALLED SUBJECT AS POSTSCRIPT OUTPUT            --> LINUX@ADMIN:~$ MAN -T SUBJECT | LPR
    # START X PRINTER SETUP INTERFACE                                      --> LINUX@ADMIN:~$ PRINTTOOL

## 🔏 NETWORK

    # LIST IP ADDRESSES FOR ALL DEVICES ON THE LOCAL MACHINE                                                                       --> LINUX@ADMIN:~$ IFCONFIG
    # USED TO SET THE PARAMETERS OF THE NETWORK INTERFACE WICH ARE SPECIFIC TO THE WIRELESS OPERATION (FOR EXMAPLE: THE FREQUENCY) --> LINUX@ADMIN:~$ IWCONFIG
    # USED TO DISPLAY SOME ADDITIONAL INFORMATION FROM A WIRELESS NETWORK INTERFACE THAT IS NOT DISPLAYED BY IWCONFIG              --> LINUX@ADMIN:~$ IWLIST
    # PING HOST AND OUTPUT RESULTS                                                                                                 --> LINUX@ADMIN:~$ PING HOST
    # GET WHOIS INFORMATION FOR DOMAIN                                                                                         --> LINUX@ADMIN:~$ WHOIS DOMAIN
    # GET DNS INFORMATION FOR DOMAIN                                                                                           --> LINUX@ADMIN:~$ DIG DOMAIN
    # REVERSE LOOKUP HOST                                                                                                      --> LINUX@ADMIN:~$ DIG -X HOST
    # DOWNLOAD FILE                                                                                                            --> LINUX@ADMIN:~$ WGET FILE
    # CONTINUE A STOPPED DOWNLOAD                                                                                              --> LINUX@ADMIN:~$ WGET -C FILE

## 🔏 SSH

    # CONNECT TO HOST AS USER                                                                                        --> LINUX@ADMIN:~$ SSH USER@HOST
    # CONNECT TO HOST ON PORT PORT AS USER                                                                           --> LINUX@ADMIN:~$ SSH -P PORT USER@HOST
    # ADD YOUR KEY TO HOST FOR USER TO ENABLE A KEYED OR PASSWORDLESS LOGIN                                          --> LINUX@ADMIN:~$ SSH-COPY-ID USER@HOST

## 🔏 USER ADMINISTRATION

    # CREATE A NEW USER CALL ACCOUNTNAME                                                           --> LINUX@ADMIN:~$ ADDUSER ACCOUNTNAME
    # GIVE ACCOUNTNAME A NEW PASSWORD                                                              --> LINUX@ADMIN:~$ PASSWD ACCOUNTNAME
    # LOG IN AS SUPERUSER FROM CURRENT LOGIN                                                       --> LINUX@ADMIN:~$ SU
    # STOP BEING SUPERUSER AND REVERT TO NORMAL USER                                               --> LINUX@ADMIN:~$ EXIT

## 🔏 PROCESS MANAGEMENT (RED HAT, FEDORA Y SIMILARES)

    # DISPLAY YOUR CURRENTLY ACTIVE PROCESSES                                                            --> LINUX@ADMIN:~$ PS
    # DISPLAY ALL RUNNING PROCESSES                                                                      --> LINUX@ADMIN:~$ TOP
    # KILL PROCESS ID PID                                                                                --> LINUX@ADMIN:~$ KILL PID
    # KILL ALL PROCESSES NAMED PROC (USE WITH EXTREME CAUTION)                                           --> LINUX@ADMIN:~$ KILLALL PROC
    # LISTS STOPPED OR BACKGROUND JOBS; RESUME A STOPPED JOB IN THE BACKGROUND                           --> LINUX@ADMIN:~$ BG
    # BRINGS THE MOST RECENT JOB TO BACKGROUND                                                           --> LINUX@ADMIN:~$ FG
    # BRINGS JOB N TO THE FOREGROUND                                                                     --> LINUX@ADMIN:~$ FG N

## 🔏 STOPPING AND STARTING (DEBIAN, UBUNTU Y DERIVADOS)

    # SHUTDOWN THE SYSTEM NOW AND DO NOT REBOOT                                                    --> LINUX@ADMIN:~$ SHUTDOWN -H NOW
    # STOP ALL PROCESSES - SAME AS ABOVE                                                           --> LINUX@ADMIN:~$ HALT
    # SHUTDOWN THE SYSTEM IN 5 MINUTES AND REBOOT                                                  --> LINUX@ADMIN:~$ SHUTDOWN -R 5
    # SHUTDOWN THE SYSTEM NOW AND REBOOT                                                           --> LINUX@ADMIN:~$ SHUTDOWN -R NOW
    # STOP ALL PROCESS AND THEN REBOOT - SAME AS ABOVE                                             --> LINUX@ADMIN:~$ REBOOT
    # START THE X SYSTEM                                                                           --> LINUX@ADMIN:~$ STARTX

## 🔏 COMANDOS SEQUENCIAIS

    # COMANDOS SEPARADOS POR PONTO E VIRGULA SÃO EXECUTADOS SEQUENCIALMENTE, INDEPENDENTEMENTE SE FOREM CORRETAMENTE EXECUTADOS
    # COMANDOS SEPARADOS POR && SÃO EXECUTADOS SOMENTE SE O COMANDO ANTERIOR FOR EXECUTADO CORRETAMENTE
    # COMANDOS SEPERADOS POR || SÃO EXECUTADOS SOMENTE SE O COMANDO ANTERIOR NÃO FOR EXECUTADO CORRETAMENTE

## 🔏 BUSCANDO INFORMAÇÕES SOBRE OS COMANDOS

    # OBTER A DESCRIÇÃO DE COMANDOS INTERNOS AO BASH-> MAN BASH
    # OBTER A DESCRIÇÃO DE UM COMANDO COM BASE NO NOME DO COMANDO                    --> MAN <COMANDO>
    # BUSCA OS COMANDOS COM BASE EM UM TRECHO DA DESCRIÇÃO DO MESMO                  --> MAN -K <DESCRICAO>
    # OBTER UMA DESCRICAO RESUMIDA DE UM COMANDO                                     --> INFO <COMANDO>
    # BUSCA OS COMANDOS COM BASE NA DESCRIÇÃO                                        --> APROPOS <DESCRICAO>
    # BUSCA INFORMAÇÕES SOBRE O COMANDO COM BASE NO NOMES DESTE                      --> LINUX@ADMIN:~$ WHATIS
    # BUSCA POR EXECUTÁVEIS NO PATHS EXPORTADOS                                      --> LINUX@ADMIN:~$ WHICH
    # BUSCA POR ARQUIVOS EXECUTÁVEIS, MAN PAGES, ARQUIVOS DE CONFIGURAÇÃO E FONTES   --> LINUX@ADMIN:~$ WHEREIS

## 🔏 QUOTING

    # ASPAS DUPLAS PROTEGEM TODOS OS CARACTERES, EXCETO: CIFRÃO, CRASE E BARRA SIMPLES
    # ASPAS SIMPLES PROTEGEM TODOS OS CARCTERES

## 🔏 COMANDOS DE TELA

    # EXIBIR A MENSAGEM "OLA, MUNDO" NO TERMINAL                                                            --> LINUX@ADMIN:~$ echo "OLA, MUNDO"
    # LIMPAR O BUFFER DO TERMINAL                                                                           --> LINUX@ADMIN:~$ CLEAR
    # LIMPAR O TERMINAL                                                                                     --> LINUX@ADMIN:~$ CTRL + L
    # INICIALIZAR UM BASH                                                                                   --> LINUX@ADMIN:~$ BASH
    # SAIR DO BASH                                                                                          --> LINUX@ADMIN:~$ EXIT
    # ACESSAR UMA PASTA                                                                                     --> LINUX@ADMIN:~$ CD
    # LISTAR OS ARQUIVOS DE UMA PASTA                                                                       --> LINUX@ADMIN:~$ LS
    # ABRIR UM ARQUIVO DE TESTE NO TERMINAL                                                                 --> LINUX@ADMIN:~$ CAT
    # ACESSAR O BASH COMO ADMINISTRADOR                                                                     --> LINUX@ADMIN:~$ SUDO SU
    # DESLIGAR O SISTEMA                                                                                    --> LINUX@ADMIN:~$ POWEROFF
    # MUDAR A RESOLUÇÃO DO MONITOR                                                                          --> LINUX@ADMIN:~$ XRANDR -S 800X600
    # RODAR O SCRIPT CHAMADO SRIPT.sh COM A VARIÁVEL TESTE VALENDO WINDOWS, NA INSTÂNCIA DA INSTRUÇÃO       --> LINUX@ADMIN:~$ env TESTE=Windows ./SCRIPT.sh
    # EXIBIR O DIRETÓRIO DA PASTA ATUAL (PRINT WORK DIRECTORY)                                              --> LINUX@ADMIN:~$ PWD
    # SAIR DO COMANDO                                                                                       --> LINUX@ADMIN:~$ Q
    # CONFERIR O ESPAÇO EM DISCO                                                                            --> LINUX@ADMIN:~$ DF
    # EXIBIR TODOS OS ARQUIVOS DO DIRETÓRIO ATUAL                                                           --> LINUX@ADMIN:~$ echo *
    # EXIBE OS DADOS ACIMA PARA TODOS OS ARQUIVOS DA PASTA ATUAL                                            --> LINUX@ADMIN:~$ WC *
    # REDIRECIONAMENTO DE SUCERRO E ERRO                                                   -->LINUX@ADMIN:~$ ls -ltr {{T,t}este.txt,Teste.{md,MD}} 1> sucesso.txt 2> erro.txt

## 🔏 CONFIGURAÇÃO TECLAS ?\ TECLADO LENOVO

    # COFIGURAÇÃO TECLADO LENOVO                     --> LINUX@ADMIN:~$ setxkbmap -model abnt2 -layout br -variant abnt2 && xmodmap -e "keycode 105 = KP_Divide question"

## 🔏 VARIÁVEIS

    # EXIBIR AS VARIÁVEIS DE AMBIENTE                                                   --> LINUX@ADMIN:~$ SET | LESS
    # EXIBIR AS VARIÁVEIS DE GLOBAIS                                                    --> LINUX@ADMIN:~$ ENV | LESS 
    # EXIBIR O TIPO DE VARIÁVEL                                                         --> LINUX@ADMIN:~$ TYPE <NOME_DA_VARIAVEL>
    # REMOVER A VARIÁVEL CHAMADA VAR                                                    --> LINUX@ADMIN:~$ UNSET VAR
    # CRIAR UMA VARIÁVEL CHAMADA VAR                                                    --> LINUX@ADMIN:~$ VAR
    # CRIAR UMA VARIÁVEL CHAMADA VAR, ATRIBUINDO-A O VALOR 10                           --> LINUX@ADMIN:~$ VAR=10
    # CRIAR UMA VARIÁVEL CHAMADA VAR, ARIBUINDO O VALOR 10 E EXPORTÁ-LA                 --> LINUX@ADMIN:~$ EXPORT VAR=10

## 🔏 TRABALHANDO COM ARQUIVOS DE TEXTO

    # ABRIR UM ARQUIVO DE TEXTO                                                                    --> LINUX@ADMIN:~$ CAT NOME_DO_ARQUIVO.FORMATO
    # ABRIR UM ARQUIVO DE TEXTO COM TODAS AS LINHAS NUMERADAS                                      --> LINUX@ADMIN:~$ CAT -N NOME_DO_ARQUIVO.FORMATO
    # ABRIR UM ARQUIVO DE TEXTO COM TODAS AS LINHAS NÃO VAZIAS NUMERADAS                           --> LINUX@ADMIN:~$ CAT -B NOME_DO_ARQUIVO.FORMATO (SIMILAR AO COMANDO NL)
    # ABRIR UM ARQUIVO DE TEXTO DEIXANDO, NO MÁXIMO, UMA LINHA EM BRANCO (APAGA SE HOUVER MAIS)    --> LINUX@ADMIN:~$ CAT -S NOME_DO_ARQUIVO.FORMATO
    # ABRIR UM ARQUIVO DE TEXTO EXIBINDO TODOS OS CARACTERES PRESENTES NO ARQUIVO                  --> LINUX@ADMIN:~$ CAT -A NOME_DO_ARQUIVO.FORMATO
    # JOGAR O CONTEÚDO DO ARQUUVO TESTE.TXT NELE MESMO                                             --> LINUX@ADMIN:~$ CAT TEST.TXT | CAT >> TESTE.TXT
    # JOGAR UM TEXTO NA TELA EM ORDEM INVERSA                                                      --> LINUX@ADMIN:~$ TAC
    # ABRIR UM ARQUIVO DE TEXTO COM AS LINHAS INVERTIDAS                                           --> LINUX@ADMIN:~$ TAC NOME_DO_ARQUIVO.FORMATO
    # ABRIR AS PRIMEIRAS X LINHAS DE UM ARQUIVO DE TEXTO                                           --> LINUX@ADMIN:~$ HEAD -XN NOME_DO_ARQUIVO.FORMATO
    # ABRIR AS X ÚLTIMAS LINHAS DE UM ARQUIVO                                                      --> LINUX@ADMIN:~$ TAIL -XN NOME_DO_ARQUIVO.FORMATO
    # ABRIR UM ARQUIVO E MONITORÁ-LO (LOG, POR EXEMPLO)                                            --> LINUX@ADMIN:~$ TAIL -F NOME_DO_ARQUIVO.FORMATO
    # INSERIR UMA STRING AO FINAL DE UM ARQUIVO DE TEXTO                                           --> LINUX@ADMIN:~$ ECHO "MENSAGEM" >> NOME_DO_ARQUIVO.FORMATO
    # ABRIR UM ARQUIVO DE TEXTO COM PAGINAÇÃO                                   --> LINUX@ADMIN:~$ LESS FILENAME.FORMAT ('/' PERMITE PESQUISAR TERMOS, 'N' REPETE A PESQUISA)
    # EXIBIR O NÚMERO DE LINHAS, QUANTIDADE DE PALAVRAS E QUANTIDADE BYTES DE UM ARQUIVO DE TEXTO  --> LINUX@ADMIN:~$ WC NOME_DO_ARQUIVO.FORMATO
    # ABRIR UM ARQUIVO DE TEXTO ORDENANDO AS LINHAS                                                --> LINUX@ADMIN:~$ SORT NOME_DO_ARQUIVO.FORMATO
    # ABRIR UM ARQUIVO DE TEXTO ORDENANDO PELAS SEGUNDAS PALAVRAS DA LINHA                         --> LINUX@ADMIN:~$ SORT -K2 NOME_DO_ARQUIVO.FORMATO
    # QUEBRAR UM ARQUIVO DE TEXTO EM N LINHAS EM OUTROS                                            --> LINUX@ADMIN:~$ SPLIT -L FILE.FORMAT OUTPUT-FILE-
    # REMOVER TODAS AS OCORRÊNCIAS DA LETRA A, B, C NUM TEXTO                                      --> LINHA@ADMIN:~$ CAT FILE.FORMAT | TR -D [A][B][C]
    # SUBSTITUIR AS OCORRÊNCIAS A POR B, B POR C, C POR D                                          --> LINUX@ADMIN:~$ CAT FILE.FORMAT | TR [A][C][C] [B][C][D]
    # OBTER OS CARACTERES DE 1 A 5 DE UM TEXTO                                                     --> LINUX@ADMIN:~$ CAT FILE.FORMAT | CUT -C1-5
    # OBTER OS CARACTERES A PARTIR DO 1 DE UM TEXTO                                                --> LINUX@ADMIN:~$ CAT FILE.FORMAT | CUT -C1-
    # OBTER UM DELIMITADOR BASEADO EM PONTO E VÍRGULA E OBTER A SEGUNDA PARTE PARA O CUT           --> LINUX@ADMIN:~$ CUT -D";" -F2 FILE.FORMAT
    # APAGAR DA LINHA 3 ATÉ  ALINHA 5 DD UM ARQUIVO DE TEXTO                                       --> LINUX@ADMIN:~$ SED '3,5 D' FILE.FORMAT
    # APAGAR A LINHA EM QUE A PALAVRA 'TESTE' FOR ENCONTRADA                                       --> LINUX@ADMIN:~$ SED '/TESTE/D/' FILE.FORMAT

## 🔏 HASH

    # MD5SUM
    # SHA256SUM
    # SHA512SUM
    # SHA1SUM
    # sha256sum -c NOME_ARQUIVO
    
## 🔏 INSTALAÇÃO

    # LISTAR TODOS OS SOFTWARES INSTALADOS                                                          --> LINUX@ADMIN:~$ grep " install " /var/log/dpkg.log

## 🔏 HISTÓRICO

    # EXIBIR O HISTÓRICO DE COMANDOS DIGITADOS                                                      --> LINUX@ADMIN:~$ HISTORY
    # EXECUTAR O ÚLTIMO SCRIPT SALVO EM BASH.HISTORY                                                --> LINUX@ADMIN:~$ !!
    # EXECUTAR UM COMANDO PELO NÚMERO DELE SALVO EM BASH.HISTORY                                    --> LINUX@ADMIN:~$ !<NUMERO>
    # LIMPAR O HISTÓRICO DE COMANDOS DIGITADOS                                                      --> LINUX@ADMIN:~$ HISTORY -C
    # PESQUISAR PELOS COMANDOS SALVOS EM BASH.HISTORY                                               --> LINUX@ADMIN:~$ CTRL + R

## 🔏 SINCRONIZAÇÃO

    # SINCRONIZAR APENAS OS ARQUIVOS QUE NÃO ESTÃO PRESENTES OU QUE FORAM ALTERADOS  --> LINUX@ADMIN:~$ RSYNC -HAVZ $PWD/LOCAL/ $PWD/REMOTO
    # REMOVER OS ARQUIVOS REMOTOS QUE NÃO ESTÃO PRESENTES LOCAMENTE                  --> LINUX@ADMIN:~$ RSYNC -HAVZ -DELETE $PWD/LOCAL/ $PWD/REMOTO
    # SINCRONIZAR APENAS OS ARQUIVOS TXT DA ORIGEM                                   --> LINUX@ADMIN:~$ RSYNC -HAVZ --INCLUDE="*.TXT" --EXCLUDE="*" $PWD/LOCAL/ $PWD/REMOTO
    # SINCRONIZAR REMOTAMENTE UTILIZANDO SSH                          --> LINUX@ADMIN:~ rsync -hvazz --include="*.png" --exclude="*" $PWD/local/ root@192.168.1.9:$PWD/remoto
