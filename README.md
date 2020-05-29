# Repositório de Scripts Úteis para GNU/Linux

1. Comparação entre Números

|  PROGRAMAÇÃO |  SHELL    |              SIGNIFICADO            |
| ------------ | --------- | ----------------------------------- |
|      ==      |    -eq    | (equal) Igual à                     |
|      !=      |    -ne    | (not equal) Diferente de            |
|      <       |    -lt    | (less than) Menor que               |
|       >      |    -gt    | (greater than) Maior que            |
|      <=      |    -le    | (less or egual) Menor ou igual à    |
|      >=      |    -ge    | (greater or equal) Maior ou igual à |

2. Comparação entre Strings

|  PROGRAMAÇÃO |                    SIGNIFICADO                    |
| ------------ | ------------------------------------------------- |
|      =       |   Igual à (isso mesmo apenas um sinal de igual)   |
|      !=      |                   Diferente de                    |
|      -n      |  String existe e não é vazia (apenas um operador) |
|      -z      |    String existe e é vazia (apenas um operador)   |

3. Verificando se o arquivo `/etc/profile` existe, sendo ambas as comparações abaixo equivalentes.

1. Possibilidade:

~$: test -f /etc/profile; echo $?

2. Possibilidade:

~$: [ -f /etc/profile ]; echo $?