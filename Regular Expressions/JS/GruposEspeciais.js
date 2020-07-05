let StringtoMatch = "João é calmo, mas no trânsito fica nervoso.";

/**
 * Retorna todas as palavras.
 */
console.log(StringtoMatch.match(/[\wÃ-Ú]+/gi));

// POSITIVE LOOKAHEAD
/**
 * Retorna todas as palavras que tenham sucesidas por vírgula.
 */
console.log(StringtoMatch.match(/[\wÂ-Ú]+(?=,)/gi));

/**
 * Retorna todas as palavras que sejam sucesidas por ponto final.
 */
console.log(StringtoMatch.match(/[\wÂ-Û]+(?=\.)/gi));

// NEGATIVE LOOKAHEAD

console.log(StringtoMatch.match(/[\wÂ-Û]+[\s\.](?!,)/gi));