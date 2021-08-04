// Task

// Complete the getLetter(s) function in the editor.It has one parameter: a string, , consisting of lowercase English alphabetic letters(i.e., a through z).It must return A, B, C, or D depending on the following criteria:

// If the first character in string  is in the set, then return A.
// If the first character in string  is in the set, then return B.
// If the first character in string  is in the set, then return C.
// If the first character in string  is in the set, then return D.

// Sample Input 0
// adfgt

// Sample Output 0
// A

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

function getLetter(s) {
    let letter;
    // Write your code here
    switch (true) {
        case 'aeiou'.includes(s[0]):
            letter = 'A'
            break;

        case 'bcdfg'.includes(s[0]):
            letter = 'B'
            break;

        case 'hjklm'.includes(s[0]):
            letter = 'C'
            break;

        case 'npqrstvwxyz'.includes(s[0]):
            letter = 'D'
            break;

        default:
            break;
    }
    return letter;
}


function main() {
    const s = readLine();

    console.log(getLetter(s));
}