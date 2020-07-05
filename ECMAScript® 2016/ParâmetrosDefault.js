/**
 * DECLARA UMA FUNÇÃO QUE TÊM PARÂMETROS PRÉ-FIXADOS, CASO NÃO SEJAM PASSADOS NA CHAMADA DA MESMA.
 */
function foo(valor1 = 10, valor2 = 20, valor3 = 30) {
    console.log(`${valor1} + ${valor2} + ${valor3} = ${valor1+valor2+valor3}`);
}

foo(undefined, undefined, 50);