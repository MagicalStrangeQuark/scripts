let IP = "192.268.0.1 1.333.1.1 192.168.0.256 256.256.256.256 192.168.0.1 127.0.0.1 10.0.0.255 10.11.12.0 255.255.255.255 0.0.0.0";

let Number = `(\\d{1,2}|1\\d{2}|2[0-4]\\d{1}|25[0-5])`;

let IPV4Adresses = RegExp(`\\b${Number}\\.${Number}\\.${Number}\\.${Number}\\b`, 'g');

console.log(IP.match(IPV4Adresses));