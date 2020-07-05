/**
 * O escopo de onde a variável foi inicializada não é importante ao usar o tipo var
 */
{
    {
        {
            {
                {
                    {
                        var ExampleVariable = "Hello, World!";

                        console.log(ExampleVariable);
                    }
                }
            }
        }
    }
}

console.log(ExampleVariable)

/**
 * Ao inicializar uma variável dentro de uma função, ela existe apenas dentro da mesma.
 */
function TesteEscopoVariavel() {
    var Hello = "Olá";

    console.log(Hello);
}

TesteEscopoVariavel();

/**
 * Isso não funciona, pois Hello não existe fora da função TesteEscopoVariavel
 */
// console.log(Hello);

var Hi = "Hi";

console.log(Hi);

// console.log(window.Hi); /** Dentro do browser, esa sintaxe é também válida */

var Number = 10

{
    Number = 15;

    console.log(Number);
}

console.log(Number);