let Text = ["0", "1", "2", "3", "4", "4", "5", "6", "7", "8", "9", "0", "a", "b", "c", "d", "e", "f"];

const RegularExp = RegExp("4");

/**
 * RETORNA UM BOOLEANO INDICANDO A OCORRÊNCIA DO PADRÃO BUSCADO NA STRING
 */
console.log(RegularExp.test(Text));

/**
 * RETORNA UM ARRAY COM O ÍNDICE DO PADRÃO BUSCADO NA STRING
 */
console.log(RegularExp.exec(Text));

let RegExpLetras = /[a-f]/g;
let Texto = "Dizes que a beleza não é nada? Imagina um hipopótamo com alma de anjo...";

/**
 * RETORNA UM ARRAY COM TODAS AS OCORÊNCIAS DO PADRÃO BUSCADO
 */
console.log(Texto.match(RegExpLetras));

/**
 * RETORNA O ÍNDICE DA PRIMEIRA OCORRÊNCIA DA EXPRESSÃO REGULAR
 */
console.log(Texto.search(RegExpLetras));

/**
 * SUBSTITUI TODAS AS OCORRÊNCIAS DA EXPRESSÃO REGULAR PELA STRING PASSADA
 */
console.log(Texto.replace(RegExpLetras, "Achei"));

/**
 * QUEBRA A STRING NOS CASOS EM QUE A EXPRESSÃO REGULAR FOR COMPATÍVEL
 */
console.log(Texto.split(RegExpLetras));