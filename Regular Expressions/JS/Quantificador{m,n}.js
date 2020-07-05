// BUSCA PADRÕES DE UM OU DOIS NÚMEROS
let Regex = /\d{1,2}/gi;

// STRING DE BUSCA
let TextPattern = "O João ganhou 120 milhões na mega-sena apostando os números 2 3 14 28 45 57";

// RETORNA O PADRÃO BUSCADO
console.log(TextPattern.match(Regex));

// BUSCA PELOS PADRÃO QUE TENHAM DOIS ALGARISMOS JUNTOS
console.log(TextPattern.match(/[0-9]{2}/gi));

// RETORNA AS SUBSTRINGS QUE CONTENHAM SETE CARACTERES
console.log(TextPattern.match(/\w{7}/gi));

// BUSCA PELAS STRINGS QUE CONTENHAM O CHORTHAND \W E O ACENTO TIO NA LETRA 'O'
console.log(TextPattern.match(/[\wõ]{7,}/gi));

// BUSCA PELOS PADRÕES QUE CONTENHAM EXATAMENTE DOIS NÚMEROS
console.log(TextPattern.match(/\b[0-9]{2}\b/gi));