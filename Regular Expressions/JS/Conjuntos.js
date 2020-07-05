/**
 * TEXTO USADO PARA BUSCAR OS PADRÕES
 */
let Text = "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, a, b, c, d, e, f , g";

let Character = "!@#$%¨&*()`{^}<>:";

let LongText = "O passado diz muito sobre quem somos e sobre o que podemos nos tornar.  "
LongText += "Seria ultrajante dizer que o passado nos molda,";
LongText += "mas ele revela mais do que palavras são capazes de expressar.";


/**
 * SEARCH PATTERN FOR PAIR NUMBERS
 */
let RegExpPares = /[02468]/g;

/**
 * SEARCH PATTERN FOR ACCENTUATION
 */
let RegExpAcentos = /[ãa]/g;

/**
 * RETURN ALL PAIR NUMBER IN TEXT
 */
console.log(Text.match(RegExpPares));

/**
 * RETURN ALL "ÁS"
 */
console.log(LongText.match(RegExpAcentos));

/**
 * SEARCH FOR PATTERN
 */
console.log(Character.match(/[!@#$%]/g));

/**
 * SEARCH FOR PATTERN
 */
console.log(Character.match(/[!@#$%]./g));