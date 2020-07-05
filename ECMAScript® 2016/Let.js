/**
 * Inicializa Number
 */
let Number = 5;

/**
 * Escopo distinto, mantém o valor 10
 */
{
    let Number = 10;

    console.log(Number);
}

/**
 * Imprime o valor 5
 */
console.log(Number);

/**
 * Utilizando Var dentro de um laço
 */
for (var j = 0; j < 10; j++) {
    console.log(j);
}

/**
 *  O valor de j é preservado, mesmo fora do laço de repetição
 */
console.log(j);

/**
 * Utilizando Let dentro de um laço
 */
for (let i = 0; i < 10; i++) {
    console.log(i);
}

/**
 * O valor de i não é preservado fora do laço
 */
// console.log(i);

/**
 * Problema com o Var
 */
const func = [];

for (var l = 0; l < 10; l++) {
    func.push(function () {
        console.log(l);
    });
}

func[2]();

func[3]();