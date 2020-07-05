First = "Wesley"

Last = "Terres"

Name = First + "-" + Last

HelloWorld = "OLA, MUNDO"

Hello_World = "ola, mundo"

Data = "PEIXE&MACACO&CACHORRO&BOI&GATO&PINGUIM"

# IMPRIME O RESULTADO DA CONCATENAÇÃO
print(Name)

# RETORNA O TAMANHO DA STRING
print(len(Name))

# RETORNA OS 7 PRIMEIROS CARACTERES DA STRING
print(Name[0:7])

# TRANSFORMA UMA STRING PARA MINPUSCULA
print(HelloWorld.lower())

# TRANSFORMAR UMA STRING PARA MAÍUSCULA
print(Hello_World.upper())

# EXPLODE UMA STRING COM BASE NUM PADRÃO
print(Data.split('&'))

# RETORNA O FALOR DO ÍNDICE DA PRIMEIRA OCORRÊNCIA DO PADRÃO BUSCADO, SENÃO RETORNA -1
print(Data.find('MACACO'))

# RETORNA A SUBSTRING CONTIDA ENTRE O INÍCIO DO PADRÃO E O FINAL DA STRING
print(Data[Data.find('MACACO'):])

# SUBSTITUI A PRIMEIRA STIRNG PELA SEGUNDA
print(Data.replace("BOI", "GADO"))