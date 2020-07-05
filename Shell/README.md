# Repositório de Scripts Úteis para GNU/Linux

🧩 Comparação entre Números

|  PROGRAMAÇÃO |  SHELL    |              SIGNIFICADO            |
| ------------ | --------- | ----------------------------------- |
|      ==      |    -eq    | (equal) Igual à                     |
|      !=      |    -ne    | (not equal) Diferente de            |
|      <       |    -lt    | (less than) Menor que               |
|       >      |    -gt    | (greater than) Maior que            |
|      <=      |    -le    | (less or egual) Menor ou igual à    |
|      >=      |    -ge    | (greater or equal) Maior ou igual à |

🧩 Comparação entre Strings

|  PROGRAMAÇÃO |                    SIGNIFICADO                    |
| ------------ | ------------------------------------------------- |
|      =       |   Igual à (isso mesmo apenas um sinal de igual)   |
|      !=      |                   Diferente de                    |
|      -n      |  String existe e não é vazia (apenas um operador) |
|      -z      |    String existe e é vazia (apenas um operador)   |

🧩 Verificando se o arquivo `/etc/profile` existe, sendo ambas as comparações abaixo equivalentes.

3.1. Possibilidade:

~$: test -f /etc/profile; echo $?

3.2. Possibilidade:

~$: [ -f /etc/profile ]; echo $?



~$: echo 'Hello World,    Testing Trrrrr ! ! !      ! ! !' | tr -s "[:blank:]" | tr "[!]" "[%]"  # EXEMPLO TR

~$: time (ls)                                                                                    # EXIBE O TEMPO DA EXCUÇÃO DA INSTRUÇÃO

~$: ls | tee temp.txt                                                                            # mostra os arquivos e grava em temp.txt

~$: cat Fruits.TXT | tr -s "[:blank:]" | uniq --unique --ignore-case | tee FruitsUniq.TXT        #

~$: cat Person.TXT | xargs echo                                                                  # EXECUTA O COMANDO APÓS XARGS PARA CADA ELEMENTO DA LISTA

~$: tr [a-z] [A-Z] <<< test.txt                                                    # REDIRECIONA O QUE O SEGUE COMO SE FOSSE O CONTEÚDO DE UM ARQUIVO TEXTO

~$: sudo find /var/ -name "*config*" -type d | xargs ls -ld | tee diretorios-config.out

~$: ls -l | awk '{print $5}' | sed '/^\s*$/d'                                                    # SUPRIMIR LINHAS EM BRANCO OU QUE CONTENHAM APENAS ESPAÇOS
