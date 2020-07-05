/**
 * DEFINE O TEXTO EM QUE SERÁ REALIZADA A BUSCA POR PADRÕES
 */
let Text = "a, b, c, d, e, f, g, h, i, j, 1, 2, 3, 4, 5, 6, 7, 8, 9";

let Interval = ".$+*?-";

let Texto = "ABC [abc] a-c 1234";

console.log(Text.match(/[A-Z]/gi));

console.log(Text.match(/[A-F]/g));

console.log(Text.match(/[A-Z1-5]/gi));

console.log(Text.match(/[1-8]/gi));

console.log(Interval.match(/[+.?*$]./g));

/**
 * NÃO REPRESENTA UM INTERVALO
 */
console.log(Interval.match(/[$-?]/g));

/**
 * PODEM PRECISAR DE UM ESCAPE DENTRO DO INTERVALO: - [ ] ^
 */
console.log(Interval.match(/[$\-?]/g));

console.log(Interval.match(/[-?]/g));

/**
 * ALGUNE CUIDADOS COM INTERVALOS
 */
console.log(Texto.match(/[a-c]/g));

console.log(Texto.match(/a-c/g));

console.log(Texto.match(/[A-z]/g));

/**
 * NÃO É UM INTERVALO VÁLIDO
 */
console.log(Texto.match(/[a-Z]/g));

console.log(Texto.match(/[Z-a|]/g));