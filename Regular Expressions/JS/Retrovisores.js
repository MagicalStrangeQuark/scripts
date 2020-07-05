let HtmlElement = "<div><span>Hello, World!</span></div><p>Find Me</p>";

let RegextoSearch = /<(\w+)>.*<\/\1>/g;

let String = "Três tigres tristes para três pratos de trigo. Três pratos de trigo para três tigres tristes.";

console.log(HtmlElement.match(RegextoSearch));

console.log(String.replace(/(Três)(tigres)?/gi, "$2"));