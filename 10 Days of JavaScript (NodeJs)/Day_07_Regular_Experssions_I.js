/* Task

Complete the function in the editor below by returning a RegExp object, re, that matches any string s that begins and ends with the same vowel. Recall that the English vowels are a, e, i, o, and u.

Output Format
The function must return a RegExp object that matches any string  beginning with and ending in the same vowel.

Sample Input 0
bcd

Sample Output 0
false

Explanation 0
This string starts with (and ends in) a consonant, so it cannot start and end with the same vowel.  */

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

function regexVar() {
    /*
     * Declare a RegExp object variable named 're'
     * It must match a string that starts and ends with the same vowel (i.e., {a, e, i, o, u})
     */
    const re = /^([aeiou]).*\1$/;
    return re;
}


function main() {
    const re = regexVar();
    const s = readLine();

    console.log(re.test(s));
}
