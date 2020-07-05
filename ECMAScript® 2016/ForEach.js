/**
 * CRIAÇÃO DE UMA ARRAY PARA SER PERCORRIDO
 */
let ArrayEstadosBR = ["Rio Grande do Sul", "Santa Catarina", "Paraná", "São Paulo", "Minas Gerais", "Bahia", "Amazonas"];

/**
 * RETORNA APENAS OS VALORES DO ARRAY
 */
ArrayEstadosBR.forEach((valor, indice, array) => {
    console.log(`${indice + 1}) ${valor}`);
});

/**
 * OUTRA POSSIBILIDADE É ARMAZENAR A FUNÇÃO DE CALLBACK EM UMA VARIÁVEL / CONSTANTE
 */
const Persons = ['Agatha', 'Aldo', 'Daniel', 'Raquel', 'John', 'Helen'];

let CallBackFunction = (name) => {
    console.log(name);
};

Persons.forEach(CallBackFunction);

/**
 * IMLEMENTAÇÃO DA FUNÇÃO FOREACH
 */
Array.prototype.myForEach = function(callback) {
    for (let i = 0; i < this.length; i++) {
        callback(this[i], i, this);
    }
};

Persons.myForEach(function (nome, indice) {
    console.log(`${indice + 1}) ${nome}`)
});