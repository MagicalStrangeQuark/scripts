let TextPattern = "<html>Hello, World!</html><html>Olá, Mundo</html>";

// QUANTIFICADORES SÃO GULOSOS (GREEDY)
console.log(TextPattern.match(/<html>.*<\/html>/gi));
console.log(TextPattern.match(/<html>.+<\/html>/gi));
console.log(TextPattern.match(/<html>.{0,100}<\/html>/gi));

// QUANTIFICADORES NÃO SÃO GULOSOS (LAZY)
console.log(TextPattern.match(/<html>.*?<\/html>/gi));
console.log(TextPattern.match(/<html>.+?<\/html>/gi));
console.log(TextPattern.match(/<html>.{0,100}?<\/html>/gi));