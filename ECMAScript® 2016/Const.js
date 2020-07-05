/**
 * DECLARAÇÃO DE VARIÁVEIS CONSTANTES
 **/
const NUMERO = 10;

console.log(NUMERO);

function foo() {
    /**
     * É POSSÍVEL DECLARAR UMA CONSTANTE COM O MESMO NOME, CASO ESTEJA EM UM ESCOPO DIFERENTE
     **/
    const NUMERO = 15;

    console.log(NUMERO);
}

foo();

{
    const NUMERO = 20;

    console.log(NUMERO);
}