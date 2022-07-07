function* Fruits() {
  yield "Damson plum";
  yield "Dinosaur Eggs (Pluots)";
  yield "Dates";
  yield "Dewberries";
  yield "Dragon Fruit";
  yield "Elderberry";
  yield "Eggfruit";
  yield "Evergreen Huckleberry";
  yield "Entawak";
}

const fruits = Fruits();

while (true) {
  const { value, done } = fruits.next();

  if (done) {
    break;
  }

  console.log(value);
}
