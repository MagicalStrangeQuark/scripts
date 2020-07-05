/**
 * LAÇO DE REPETIÇÃO FOR APLICADO A UMA TABUADA
 */
for (let y = 0; y <= 10; y++) {

    console.log('Tabuada : ' + y);

    for (let x = 0; x <= 10; x++) {
        console.log(y + ' x ' + x + ' = ' + y * x);
    }
}

let contador = 1
while (contador <= 10) {
    console.log(`contador = ${contador}`)
    contador++
}

for (let i = 1; i <= 10; i++) {
    console.log(`i = ${i}`)
}

const notas = [6.7, 7.4, 9.8, 8.1, 7.7]
for (let i = 0; i < notas.length; i++) {
    console.log(`nota = ${notas[i]}`)
}

const notas = [6.7, 7.4, 9.8, 8.1, 7.7]

for (let i in notas) {
    console.log(i, notas[i])
}

const pessoa = {
    nome: 'Ana',
    sobrenome: 'Silva',
    idade: 29,
    peso: 64
}

for (let atributo in pessoa) {
    console.log(`${atributo} = ${pessoa[atributo]}`)
}

/**
 * CRIAÇÃO DE UM ARRAY PAÍSES PARA SER PERCORRIDO
 */
let Countries = ["Brazil", "France", "USA", "Canada", "Chile"];

/**
 * LAÇO DE REPETIÇÃO FOR IN
 */
for (let y in Countries) {
    console.log(Countries[y]);
}