let StringtoMatch = "Não tive filhos, \n não transmiti a nenhuma criatura o legado de nossa miséria."

/**
 * Não traz toda a string, pois não contém quebra de linha (Problema do Dotall).
 */
console.log(StringtoMatch.match(/^N.*\.$/gi));

/**
 * Para resolver a questão acima, pode-se usar a seguinte estrutura.
 */
console.log(StringtoMatch.match(/^Não[\s\S]*miséria.$/gi));