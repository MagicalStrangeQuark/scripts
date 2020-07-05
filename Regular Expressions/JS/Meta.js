/**
 * METACARACTERES REPRESENTANTES
 * 
 *  .      PONTO               UM CARACTERE QUALQUER
 *  []     CONJUNTO            CONJUNTO DE CARACTERES PERMITIDOS
 *  ^      CONJUNTO NEGADO     CONJUNTO DE CARACTERES NEGADOS
 */

/**
 * METACARACTERES QUANTIFICADORES
 * 
 *  ?         OPCIONAL           ZERO OU UM
 *  *         ASTERISCO          ZERO OU MAIS
 *  +         MAIS               UM OU MAIS
 *  {m, n}    CHAVES             DE N ATÉ M
 */

/**
 * METACARACTERES ÂNCORAS
 * 
 * ~       CIRCUNFLEXO     INÍCIO DE LINHA
 * $       CIFRÃO          FIM DE LINHA
 * \b      BORDA           INÍCIO OU FIM DA PALAVRA
 */

/**
 * OUTROS METACARACTERES
 * 
 * \          ESCAPE         USO DE METACARACTERES COMO LITERAL
 * |          OU             OPERACAO DE OU
 * ( )        GRUPO          DEFINE UM GRUPO
 * \1... \q   RETROVISOR     RESGATA GRUPOS JÁ DEFINIDOS
 */

let Var = "Texto para Teste de Metacaracteres";

console.log(Var.match(/o.p/));

let CPF = "On the other hand, we denounce with righteous indignation and dislike men who are so beguiled: 313.650.700-26";
let mp3Files = "Lista de arquivos mp3: rock.mp3, jazz.mp3, metal.mp3, blues.mp3, electronic.mp3";
let TextSpaces = " Texto             de      Exemplo  ";
let RegExpCpf = /\d\d\d\.\d\d\d\.\d\d\d\-\d\d/g;
let mp3FilesRegExp = /\w+\.mp3/g;

console.log(CPF.match(RegExpCpf));
console.log(CPF.match(/\w+/g))
console.log(mp3Files.match(mp3FilesRegExp));

console.log(TextSpaces.match(/\s+/gi));
console.log(TextSpaces.match(/\s{3}/gi));
console.log(TextSpaces.match(/\ {3}/gi));