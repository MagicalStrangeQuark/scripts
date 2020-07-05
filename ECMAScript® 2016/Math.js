const ValorRaio = 10;

/**
 * CALCULA O VALOR DA ÁREA DO CÍRCULO, UTILIZANDO-SE A FÓRMULA A = PI * R^2,
 */
const Area = Math.PI * Math.pow(ValorRaio, 2);

/**
 * MOSTRA O VALOR DA ÁREA, LIMITADO A DUAS CASAS DECIMAIS.
 */
console.log(Area.toFixed(2));

/**
 * MATH É UM OBJETO
 */
console.log(typeof Math);