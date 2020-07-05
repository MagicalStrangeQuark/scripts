/** Array é uma função e new Array é um objeto, assim como [] */
console.log(typeof Array, typeof new Array, typeof [])

const Pilots = ['Vettel', 'Alonso', 'Raikkonen', 'Massa'];

/** O método POP remove o último elemento do array */

Pilots.pop(); /** [ 'Vettel', 'Alonso', 'Raikkonen' ] */

/** O método PUSH o elemento ao final do array */

Pilots.push('Verstappen'); /** [ 'Vettel', 'Alonso', 'Raikkonen', 'Verstappen' ] */

/** O método SHIFT remove o primeiro elemento do array */

Pilots.shift(); /** [ 'Alonso', 'Raikkonen', 'Verstappen' ] */

/** O método UNSHIFT adiciona o elemento no início do array */

Pilots.unshift('Hamilton'); /** [ 'Hamilton', 'Alonso', 'Raikkonen', 'Verstappen' ] */

/** Nesse contexto, o método splice adiciona os elementos na posição 2 no array */

Pilots.splice(2, 0, 'Bottas', 'Massa'); /** [ 'Hamilton', 'Alonso', 'Bottas', 'Massa', 'Raikkonen', 'Verstappen' ] */

/** Nesse contexto, o método splice remove 1 elemento(s) a partir da terceira posição do array */

Pilots.splice(3, 1); /** [ 'Hamilton', 'Alonso', 'Bottas', 'Raikkonen', 'Verstappen' ] */

/** Gera um novo array, contendo todos os elementos a partir (contendo) do índice 2 */

const NewPilots = Pilots.slice(2); /** [ 'Bottas', 'Raikkonen', 'Verstappen' ] */

/** Gera um novo array, contendo todos os elementos a partir (contendo) do índice 1, até (excluindo-se) o elemento 4 */

const OtherPilots = Pilots.slice(1, 4); /** [ 'Alonso', 'Bottas', 'Raikkonen' ] */

/** Retorna o número de elementos contidos no array */

console.log(OtherPilots.length);

/** Ao acessar um índice não existente, o retorno será undefined */

console.log(OtherPilots[3]); /** Caso tentássemos acessar uma propriedade desse elemento (undefined) teríamos um erro */

/** Remove uma propriedade de um objeto */

var Employee = {
    age: 28,
    name: 'abc',
    designation: 'developer'
}

/** Retorna true */
console.log(delete Employee.name);

/** Quando se tenta remover uma propriedade que não existe, o retorno será true  */
console.log(delete Employee.salary);

const QuaseArray = {
    0: 'Rafael',
    1: 'Ana',
    2: 'Bia'
}

console.log(QuaseArray)

Object.defineProperty(QuaseArray, 'toString', {
    value: function () {
        return Object.values(this)
    },
    enumerable: false
})

console.log(QuaseArray[0])

const meuArray = ['Rafael', 'Ana', 'Bia']

console.log(QuaseArray.toString(), meuArray)