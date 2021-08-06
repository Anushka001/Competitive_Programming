// Task

// Complete the reverseString function; it has one parameter, s. You must perform the following actions:

// Try to reverse string s using the split, reverse, and join methods.
// If an exception is thrown, catch it and print the contents of the exception's message on a new line.
// Print  on a new line. If no exception was thrown, then this should be the reversed string; if an exception was thrown, this should be the original string.

// Sample Input 0
// "1234"

// Sample Output 0
// 4321

// Sample Input 1
// Number(1234)

// Sample Output 1
// s.split is not a function
// 1234

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

function reverseString(s) {
    try {
        s = s.split("").reverse().join("");
    }
    catch (exception) {
        console.log(exception.message);
    }
    finally {
        console.log(s);
    }
}


function main() {
    const s = eval(readLine());

    reverseString(s);
}