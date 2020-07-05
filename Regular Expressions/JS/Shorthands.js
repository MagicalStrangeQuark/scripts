let Text = `0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, b, c, d, e, f, g, ~, \r, {, }, _, A, B, C, D`;

/**
 * AS DUAS EXPRESSÕES REGULARES ABAIXO SÃO EQUIVALENTES
 * \w    [a-z]|\_|[A-Z]|[0-9]      NÚMEROS DE 0 A 9, LETRAS MINÚSCULAS E MAÍUSCULAS E UNDERLINE
 */
console.log(Text.match(/[\w]/g));

console.log(Text.match(/[a-z]|\_|[A-Z]|[0-9]/g));

// RETORNA TODOS OS NÚMEROS PRESENTES NA STRING
console.log(Text.match(/\d/g));

// RETORNA TODOS OS NÃO NÚMEROS PRESENTES NA STRING
console.log(Text.match(/(\D)/g));

// RETORNA TODOS OS NÃO NÚMEROS PRESENTES NA STRING
console.log(Text.match(/([^0-9])/g));

// RETORNA TODOS OS NÃO CARACTERES
console.log(Text.match(/\W/g));

// RETORNA TODOS OS TIPOS DE ESPAÇOS, SENDO ELES: \t \n \r \f
console.log(Text.match(/\s/g));

// RETORNA TODOS OS NÃO ESPAÇOS
console.log(Text.match(/\S/g));