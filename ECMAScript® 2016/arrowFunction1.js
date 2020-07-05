let dobro = function (a) {
    return 2 * a
}

dobro = (a) => {
    return 2 * a 
}

dobro = a => 2 * a // return implícito
console.log(dobro(Math.PI))

let ola = function () {
    return 'Olá'
}

ola = () => 'Olá'
ola = _ => 'Olá' // possui um param
console.log(ola())

function Pessoa() {
    this.idade = 0

    setInterval(() => {
        this.idade++
        console.log(this.idade)
    }, 1000)
}

new Pessoa

let comparaComThis = function (param) {
    console.log(this === param)
}

comparaComThis(global)

const obj = {}
comparaComThis = comparaComThis.bind(obj)
comparaComThis(global)
comparaComThis(obj)

let comparaComThisArrow = param => console.log(this === param)
comparaComThisArrow(global)
comparaComThisArrow(module.exports)

comparaComThisArrow = comparaComThisArrow.bind(obj)
comparaComThisArrow(obj)
comparaComThisArrow(module.exports)

/**
 * DECLARA UMA FUNÇÃO QUE ATRIBUINDO A MESMA A UMA VARIÁVEL.
 */
let quadrado = function (x = 7) {
    return x * x;
}

console.log(quadrado(10));

/**
 * ARROW FUNCTION RECEBENDO DOIS PARÂMETROS.
 */
let sum = (x, y) => {
    return x + y;
}

console.log(sum(10, 6));

/**
 * ARROW FUNCTION CONTENDO UM OPERADOR TERNÁRIO.
 */
let retornaParouImpar = numero => numero % 2 == 0 ? "PAR" : "ÍMPAR";

let numero = Math.floor(Math.random() * 100);

/**
 * PASSA UM VALOR ALEATÓRIO PARA A FUNÇÃO RETORNAPAROUIMPAR
 */
console.log(`${numero} É ${retornaParouImpar(numero)}`);

function sum(a = 10, b = 15) {
    return a + b;
}

sum();

const MyStrangeFunction = (a, b, c) => {
    return a + b + c;
}

let MyArrowFunction = (a, b, c) => a * b * c

console.log(MyArrowFunction(10, 6, 2));

MyStrangeFunction(10, 20, 30);

console.log(MyStrangeFunction(10, 20, 30));

const Pessoa = {
    nome: "Wesley",
    nacionalidade: "Brasileira"
}

console.log(sum(50));

console.log(Pessoa);