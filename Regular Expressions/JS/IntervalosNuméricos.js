let NumberstoGet = "0 5 14 67 112 170 230 255 256 430 430 600 780 925 1000 1030";

/**
 * Expressão regular para obter todos os números situados entre 0 e 255
 */
console.log(NumberstoGet.match(/\b(\d{1,2}|1\d{2}|2[0-4]\d|25[0-5])\b/g));