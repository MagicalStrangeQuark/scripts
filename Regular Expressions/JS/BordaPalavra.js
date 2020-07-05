let StringtoMatch = "diagragma dia melodia abadia radial";

/**
 * Busca os padrões que contenham uma palavra começando com dia
 */
console.log(StringtoMatch.match(/\bdia(\w+)?/gi));

/**
 * Busca os padrões que contenham uma palavra começando com dia
 */
console.log(StringtoMatch.match(/\bdia\w*/gi));

/**
 * Busca os padrões que contenham uma palavra terminando com dia
 */
console.log(StringtoMatch.match(/\w+dia/gi))

/**
 * Busca os padrões que contenham a palavra dia no meio da palavra
 */
console.log(StringtoMatch.match(/\w+dia\w+/gi))

/**
 * Busca os padrões que contenham exatamente a palavra dia
 */
console.log(StringtoMatch.match(/\bdia\b/gi))

// BORDA É NÃO \W, OU SEJA, [^A-Za-z0-9_]

let StringProblemaAcentuacao = "dia diatônico wikipédia, média";

/**
 * A expressão regular abaixo retorna mais de uma corrência, pois acentuação é considerado borda
 */
console.log(StringProblemaAcentuacao.match(/\bdia\b/gi));

/**
 * Para trazer todas as palavras, com ou sem acentuação, pode-se usar a expressão regular abaixo.
 */
console.log(StringProblemaAcentuacao.match(/([\wÀ-ú-]*)?dia([\wÀ-ú-]*)?/gi))