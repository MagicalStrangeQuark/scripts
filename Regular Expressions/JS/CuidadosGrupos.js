let StringtoMatch = "Cada dia é uma (cha)nce para ser melhor que ontem.";

/**
 * Parênteses dentro de um intervalo não representa um grupo
 */
console.log(StringtoMatch.match(/[(cha)]/gi));

/**
 * Dentro de um grupo, podemos ter um intervalo
 */
console.log(StringtoMatch.match(/([cha])/gi));