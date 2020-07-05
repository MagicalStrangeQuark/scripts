/**
 * Ambas as estruturas são equivalentes, uma vez que ocorre o hoisting da variável a, no momento em que o código é interpretado 
 */
{
    console.log(a);

    var a = 25;

    console.log(a);
}

{
    var b;

    console.log(b);

    b = 50;

    console.log(b);
}