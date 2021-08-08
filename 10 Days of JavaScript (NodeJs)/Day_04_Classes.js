// Task

// Create a Polygon class that has the following properties:

// - A constructor that takes an array of integer values describing the lengths of the polygon's sides.
// - A perimeter() method that returns the polygon's perimeter.


/*
 * Implement a Polygon class with the following properties:
 * 1. A constructor that takes an array of integer side lengths.
 * 2. A 'perimeter' method that returns the sum of the Polygon's side lengths.
 */


class Polygon {
    constructor(sides) {
        this.sides = sides;
    }
    perimeter() {
        let sum = 0;
        for (let ind = 0; ind < this.sides.length; ind++) {
            sum = sum + this.sides[ind];
        }
        return sum;
    }

}


const rectangle = new Polygon([10, 20, 10, 20]);
const square = new Polygon([10, 10, 10, 10]);
const pentagon = new Polygon([10, 20, 30, 40, 43]);

console.log(rectangle.perimeter());
console.log(square.perimeter());
console.log(pentagon.perimeter());