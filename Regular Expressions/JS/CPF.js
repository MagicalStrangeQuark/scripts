let TextCPF = "Alguns CPF's Possíveis são: 774.075.526-57, 304.773.210-89, 450.421.820-80 e 346.053.084-74";

console.log(TextCPF.match(/\d\d\d\.\d\d\d\.\d\d\d\-\d\d/gi));

console.log(TextCPF.match(/\d{3}\.\d{3}\.\d{3}\-\d{2}/gi));