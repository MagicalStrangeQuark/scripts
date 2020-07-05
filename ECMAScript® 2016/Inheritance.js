class Animal {
    constructor() {
        this.name = `Without name`;
        this.color = 'Without color';
    }
    getName() {
        return this.name;
    }
}

class Dog extends Animal {
    constructor(name) {
        super();
        this.name = name;
    }
}

let dog = new Dog(`Blueberry`);

console.log(dog);

console.log(dog.getName());