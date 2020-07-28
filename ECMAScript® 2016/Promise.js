const axios = require("axios");
const fs = require('fs');

const __COUNTRY = `brazil`;
const __STATUS_OK = 200;

const options = {
    url: `https://restcountries.eu/rest/v2/name/${__COUNTRY}`,
    method: 'GET',
    headers: {
        'Accept': 'application/json',
        'Content-Type': 'application/json;charset=UTF-8'
    },
    data: {
        a: 0,
        b: 1,
        c: 2
    }
};

console.log(1);

axios(options)
    .then(response => {
        if (response.status === __STATUS_OK) {
            const Country = response.data[0];
            console.log(Country.name);
            fs.writeFile('brazil.txt', JSON.stringify(response.data), function (err) { })
        }
    });

console.log(2);

console.log(3);

function CountryData(name) {
    return new Promise((resolve, reject) => {
        if (true === true) {
            return resolve({ "message": "all ok!" });
        } else {
            return reject({ "message": "an error ocurried!" });
        }
    });
}

const info = CountryData("Hellllo!");

info.then((response) => {
    console.log(response.message);
})

