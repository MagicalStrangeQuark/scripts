/**
 * FLAGS EM EXPRESSÕES REGULARES UTILIZANDO A LINGUAGEM JAVASCRIPT
 */

/** 
 * G - GLOBAL
 * I - IGNORE CASE (NÃO DISCRIMINA ENTRE LETRAS MAÍUSCULAS E MINÚSCULAS)
 */

let Text = "Dizes que a beleza não é nada? Imagina um hipopótamo com alma de anjo...";

/**
 * RETORNA O ÍNDICE DA PRIMEIRA OCORRÊNCIA DESSE PADRÃO DE BUSCA, OU, SEJA `D`IZES
 */
console.log(Text.match(/D|le/));

/**
 * RETORNA O ÍNDICE DA PRIMEIRA OCORRÊNCIA DA LETRA I, NÃO IMPORTANDO SE É MAÍUSCULA OU MINÚSCULA
 */
console.log(Text.match(/i/i));

/**
 * RETORNA TODAS AS OCORRÊNCIAS DE Z, N OU ?, DENTRO DA STRING
 */
console.log(Text.match(/z|n|\?/gi));