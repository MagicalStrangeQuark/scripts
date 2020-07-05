class Item {
    label;
    quantity;

    __construct() {
        console.log(new Date());
    }

    show() {
        return this;
    }

    __set(data) {
        Object.keys(data).forEach(element => {
            this[element] = data[element];
        });
    }
}

const item = new Item();

item.__set({
    label: "Mola",
    quantity: 10
});

console.log(item.show());