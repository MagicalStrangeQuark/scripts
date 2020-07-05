let StringtoMatch = "HIPERMERCADO SUPERMERCADO MERCADO MINIMERCADO";

/**
 * Expressão regular comum
 */
console.log(StringtoMatch.match(/(HIPER|SUPER|MINI)?MERCADO/gi));

/**
 * Expressão regular com grupos aninhados
 */
console.log(StringtoMatch.match(/((SU|HI)PER|MINI)?MERCADO/gi));