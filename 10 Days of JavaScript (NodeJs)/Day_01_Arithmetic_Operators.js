/* Task

Complete the following functions in the editor below:

1. getArea(length, width): Calculate and return the area of a rectangle having sides length and width.
2. getPerimeter(length, width): Calculate and return the perimeter of a rectangle having sides length and width.

Sample Input 0
3
4.5

Sample Output 0
13.5
15   */

'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });

    main();
});

function readLine() {
    return inputString[currentLine++];
}

function getArea(length, width) {
    let area;
    // Write your code here
    area = length * width;
    return area;
}

function getPerimeter(length, width) {
    let perimeter;
    // Write your code here
    perimeter = 2 * (length + width);
    return perimeter;
}

function main() {
    const length = +(readLine());
    const width = +(readLine());

    console.log(getArea(length, width));
    console.log(getPerimeter(length, width));
}
