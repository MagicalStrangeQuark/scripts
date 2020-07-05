/**
 * DECLARA AS DUAS VARIÁVEIS NOTAS USADAS COMO NO DESENVOLVIMENTO
 */
const NotaPrimeiroSemeste = 6.8;
const NotaSegundoSemestre = 7.2;

console.log(NotaPrimeiroSemeste, NotaSegundoSemestre);

/**
 * ACESSA O MÉTODO ISINTEGER DA CLASSE NUMBER, RETORNANDO UM BOOLEAN(TRUE OU FALSE)
 * SE FOSSE REALIZADA A OPERAÇÃO NUMBER.ISINTEGER(NUMBER("2.0")) RETORNARIA TRUE
 */
console.log(Number.isInteger(NotaPrimeiroSemeste));
console.log(Number.isInteger(NotaSegundoSemestre));

const PesodoPrimeiroSemestre = 2;
const PesodoSegundoSemestre = 3;

const sumDivisor = PesodoPrimeiroSemestre + PesodoSegundoSemestre;
const NotaFinal = (NotaPrimeiroSemeste * PesodoPrimeiroSemestre + NotaSegundoSemestre * PesodoSegundoSemestre) / sumDivisor;

console.log(NotaFinal);

/**
 * RETORNA O NÚMERO COM AS CASAS DECIMAIS PASSADAS COMO PARÂMETRO
 */
console.log(NotaFinal.toFixed(1))
/**
 * RETORNA UMA STRING
 */
console.log(NotaFinal.toString());

/**
 * SE PASSADO O ARGUMENTO 2, ETORNA O VALOR EM BINÁRIO DO NÚMERO INFORMADO
 */
console.log(NotaFinal.toString(2));

/**
 * INFORMA QUE NUMBER É UMA FUNÇÃO
 */
console.log(typeof Number)