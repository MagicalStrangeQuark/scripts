let SenhastoTest = "123 ABC A!BC$abcdef GUI Brasil 1997 123456789";

/**
 * Requisitos para uma senha ser considerada forte.
 * 
 * 🗡 Deve possuir mais de 7 caracteres
 * ⚙ Deve possuir menos de 20 caracteres
 * 🛠 Deve possuir ao menos um carácter especial ! @ # $ % ¨ & * ( )
 * 💣 Deve possuir letras maiúsculas e minúsculas
 * 🛡 Deve possuir ao menos um número
 * ⚔
 * 📡
 */

console.log(SenhastoTest.match(/^.{6,20}$/gm));

console.log(SenhastoTest.match(/^(?=.*[A-Z]).{6,20}$/gm));

console.log(SenhastoTest.match(/^(?=.*[A-Z])(?=.*[a-z])(?=.*\d)(?=.*[@#$%!^&*]).{6,20}$/g))