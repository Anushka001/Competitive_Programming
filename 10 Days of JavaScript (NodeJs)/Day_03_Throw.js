/*Task
Complete the isPositive function below. It has one integer parameter, a. If the value of a is positive, it must return the string YES. Otherwise, it must throw an Error according to the following rules:

If a is 0, throw an Error with message = Zero Error.
If a is negative, throw an Error with message = Negative Error.

Sample Input 0
3
1
2
3

Sample Output 0
YES
YES
YES     */

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

function isPositive(a) {
    if (a == 0) {
        throw Error('Zero Error');
    }
    if (a < 0) {
        throw Error('Negative Error');
    }

    return 'YES';
}


function main() {
    const n = +(readLine());

    for (let i = 0; i < n; i++) {
        const a = +(readLine());

        try {
            console.log(isPositive(a));
        } catch (e) {
            console.log(e.message);
        }
    }
}
