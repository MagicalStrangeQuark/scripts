let Hello = "Hello, World";

let Fruits = "Morango, Uva, Abacaxi, Maçã";

/**
 * Retorna o valor do caracter na posição 4.
 */
console.log(Hello.charAt(4));

/**
 * Retorna o código ASCII, Unicode, do caracter presente na posição passada.
 */
console.log(Hello.charCodeAt(4));

/**
 * Retorna a psição do caractere passado.
 */
console.log(Hello.indexOf("W"));

/**
 * Retorna o conteúdo dos 3 primeiros caracteres a partir do 0
 */
console.log(Hello.substring(0, 3));

/**
 * Concatena o conteúdo do método na string.
 */
console.log(Hello.concat("!").concat(" Have a good night!"));

/**
 *  Explode o array a partir do argumento passado.
 */
console.log(Fruits.split(","));