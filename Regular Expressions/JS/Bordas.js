let StringtoMatch = "Dinheiro não trás felicidade. Realmente... a quantidade de dinheiro que eu ganho, não.";

/**
 * Um circunflexo dentro de um conjunto, tem como função negar o mesmo.
 */
console.log(StringtoMatch.match(/[^\w\s]/gi));

/**
 * Um circunflexo no início da expessão regular, busca os padrões que começam por ou estão presentes no começo da string 
 */
console.log(StringtoMatch.match(/^dinheiro/gi));

/**
 * O cifrão no final da expressão regular tem a função de obter os padrões que estão no final da string
 */
console.log(StringtoMatch.match(/não.$/gi));