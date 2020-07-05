/**
 * REALIZANDO A BUSCA DE CARACTERES ATRAVÉS DA TABELA UNICODE
 */

 let UnicodeSymbols = "ᚵᚵ";
 let RegExpUnicode = /\u16B5/gi

 console.log(UnicodeSymbols.match(RegExpUnicode));