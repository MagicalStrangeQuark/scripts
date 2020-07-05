// BUSCA PELO PADRÃO FOG, COM OU SEM 'O'
let Regex = /fogo*?/gi;

// STRING DE BUSCA
let Text = "FO FOG FOGO FOGOO FOGOOO FOGUEIRA";

// RETORNA O PADRÃO BUSCADO
console.log(Text.match(Regex));