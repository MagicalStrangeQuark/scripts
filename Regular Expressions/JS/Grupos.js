let StringExample = "Hide yourself in God, so when a man wants to find you he will have to go there first";

let StringtoSearch = "https://www.youtube.com/watch?v=Z_9nfYT3QyQ, https://www.udemy.com, www.google.com";

/** Obter o valor 20 desse Array */
let ArrayToSeach = "ArrayToGetTheName[20][AnyPossibleKey]";

let PatternToSearch = /(https:\/\/)?(www\.)(\w+?)(\.com)\/?/g;

let PattertoYoutube = /^(http(s)?:\/\/)?((w){3}.)?youtu(be|.be)?(\.com)?\/.+/g

console.log((StringtoSearch.match(PattertoYoutube)));

console.log(StringtoSearch.match(PatternToSearch));

console.log(ArrayToSeach.replace(/(ArrayToGetTheName\[)|(\]\[AnyPossibleKey\])/g, ""));