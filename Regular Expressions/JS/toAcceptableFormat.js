/**
 * Obtém o dia da semana em formato numérico (0-6).
 * 
 * @param {String} date 
 * 
 * @return {Integer}
 */
function toAcceptableFormat(arg) {
    return arg.match(/(?<!\d)\d{1,2}(?!\d)|[A-Za-z]{3}|\d{4}|\([a-z]{3,4}\)/g).join(String.fromCharCode(32));
}

/** @Test@ */
console.log(toAcceptableFormat("16Mar2020(mon)") === "16 Mar 2020 (mon)");
console.log(toAcceptableFormat("17Mar2020(tues)") === "17 Mar 2020 (tues)");
console.log(toAcceptableFormat("18Mar2020(wed)") === "18 Mar 2020 (wed)");
console.log(toAcceptableFormat("0YYY9999(xyz)") === "0 YYY 9999 (xyz)");