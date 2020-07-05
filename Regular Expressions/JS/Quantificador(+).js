// QUANTIFICADOR: + => UM OU MAIS

/**
 * ARRAY
 */
let Array = "FoGo Fogo FOGOOOOOOO FOG FOGUEIRA";
let StringNumbers = "NÚMEROS: 0123456789.";

// BUSCA APENAS OS PADRÕES QUE POSSUAM A PALAVRA FOGO OU MAIS O's
console.log(Array.match(/fogo/gi))

// BUSCA OS PADRÕES QUE POSSUAM A PALAVRA FOGO, SENDO A LETRA O APRESENTADA MAIS VEZES
console.log(Array.match(/fogo+/gi));

// RETORNA TODOS OS NÚMEROS COMO UMA STRING
console.log(StringNumbers.match(/[0-9]/g));

// RETORNA TODOS OS NÚMEROS COMO UMA STRING ÚNICA, ENQUANTO ENCONTRAR NÚMERO
console.log(StringNumbers.match(/[0-9]+/g));
console.log(StringNumbers.match(/\d+/g));