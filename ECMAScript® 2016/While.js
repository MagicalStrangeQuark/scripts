{
    let Laco = new Array();

    Laco[0] = "Uva";
    Laco[1] = "Banana";
    Laco[2] = "Ameixa";
    Laco[3] = "Morango";

    /**
     * OBTÉM O TAMANHO DO ARRAY
     */
    let TamArray = Laco.length;

    /**
     * VERIFICA-SE QUE ARRAY É UMA FUNÇÃO
     */
    console.log(typeof Array);

    /**
     * EXIBIMOS O TAMANHO DO ARRAY
     */
    console.log(TamArray);

    /**
     * DECLARA UMA VARIÁVEL USADA COMO CONTADOR
     */
    let y = 0;

    /**
     * PERCORRE O ARRAY
     */
    while(y++ < TamArray) {
        console.log(Laco[y]);
    }
}

function getInteiroAleatorioEntre(min, max) {
    const valor = Math.random() * (max - min) + min
    return Math.floor(valor)
}

let opcao = 0

while (opcao != -1) {
    opcao = getInteiroAleatorioEntre(-1, 10)
    console.log(`Opção escolhida foi ${opcao}.`)
}

console.log('Até a próxima!')