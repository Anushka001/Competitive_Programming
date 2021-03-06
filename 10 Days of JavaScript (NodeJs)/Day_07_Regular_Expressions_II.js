/* Task

Complete the function in the editor below by returning a RegExp object, re, that matches any string s satisfying both of the following conditions:

- String s starts with the prefix Mr., Mrs., Ms., Dr., or Er.
- The remainder of string s (i.e., the rest of the string after the prefix) consists of one or more upper and/or lowercase English alphabetic letters (i.e., [a-z] and [A-Z]).

Output Format
The function must return a RegExp object that matches any string s satisfying both of the given conditions.

Sample Input 0
Mr.X

Sample Output 0
true

Explanation 0
This string starts with Mr., followed by an English alphabetic letter (X).  */

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
     * It must match a string that starts with 'Mr.', 'Mrs.', 'Ms.', 'Dr.', or 'Er.', 
     * followed by one or more letters.
     */
    
    const re = /^(Mr|Mrs|Dr|Er)\.\w+$/;
    return re;
}


function main() {
    const re = regexVar();
    const s = readLine();
    
    console.log(!!s.match(re));
}
