// Task

// First, print each vowel in s on a new line. The English vowels are a, e, i, o, and u, and each vowel must be printed in the same order as it appeared in s.
// Second, print each consonant (i.e., non-vowel) in s on a new line in the same order as it appeared in s.

// Input Format
// There is one line of input with the string s.

// Output Format
// First, print each vowel in s on a new line (in the same order as they appeared in s). Second, print each consonant (i.e., non-vowel) in s on a new line (in the same order as they appeared in s).

// Sample Input 0
// javascriptloops

// Sample Output 0
// a
// a
// i
// o
// o
// j
// v
// s
// c
// r
// p
// t
// l
// p
// s

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

function vowelsAndConsonants(s) {
    var vow = ['a', 'e', 'i', 'o', 'u']

    for (var i = 0; i < s.length; i++) {
        if (vow.indexOf(s[i]) > -1)
            console.log(s[i]);
    }

    for (var i = 0; i < s.length; i++) {
        if (vow.indexOf(s[i]) < 0)
            console.log(s[i]);
    }
}


function main() {
    const s = readLine();

    vowelsAndConsonants(s);
}