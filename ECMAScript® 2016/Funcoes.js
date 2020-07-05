/**
 * RETORNANDO OS VALORES DOS ARGUMENTOS PASSADOS PARA UMA FUNÇÃO
 */

 function sum() {
     for(let x in arguments) {
         console.log(arguments[x]);
     }

     console.log(arguments);
 }

/**
 * PASSA DIVERSOS VALORES PARA A FUNÇÃO
 */
 sum(1, 2, 5, 7, 11, 23);

 let ArrayNum = [1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89];

/**
 * PASSA UM ARRAY PARA A FUNÇÃO
 */
 sum(ArrayNum);