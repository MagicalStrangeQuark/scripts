/**
 * EXEMPLO DE TRATAMENTO DE ERROS
 */
function getVideo(video) {
    try {
        console.log(video[2]['filme']['2']);
    } catch (e) {
        throw new Error(`Ocorrou um erro. Estamos trabalhando nele.`)
    } finally {
        console.log('fim da tratativa');
    }
}

getVideo("Nanatsu no Taizai");

function tratarErroELancar(erro) {
    // throw new Error('...')
    // throw 10
    // throw true
    // throw 'mensagem'
    throw {
        nome: erro.name,
        msg: erro.message,
        date: new Date
    }
}

function imprimirNomeGritado(obj) {
    try {
        console.log(obj.name.toUpperCase() + '!!!')
    } catch (e) {
        tratarErroELancar(e)
    } finally {
        console.log('final')
    }
}

const obj = {
    nome: 'Roberto'
}

imprimirNomeGritado(obj)