function one(arg) {
    return `${arg}(one)`;
}

function two(arg) {
    return `${arg}(two)`;
}

function three(arg) {
    return `${arg}(three)`;
}

console.log(three(two(one(''))));

function composicao(...funcoes) {
    // currying (lazy evaluation)
    return function (valor) {
        return funcoes.reduce((acc, fn) => {
            return fn(acc);
        }, valor)
    }
}

one_two = composicao(one, two);

console.log(one_two('(hello)'));

one_three = composicao(one, three)('(hi)');

console.log(one_three);