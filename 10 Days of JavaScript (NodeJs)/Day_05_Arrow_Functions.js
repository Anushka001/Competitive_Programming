/* Task

Complete the function in the editor. It has one parameter: an array, nums. It must iterate through the array performing one of the following actions on each element:

If the element is even, multiply the element by 2.
If the element is odd, multiply the element by .
The function must then return the modified array.

Input Format
The first line contains an integer, n, denoting the size of nums.
The second line contains n space-separated integers describing the respective elements of nums.

Output Format
Return the modified array where every even element is doubled and every odd element is tripled.  */

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

/*
 * Modify and return the array so that all even elements are doubled and all odd elements are tripled.
 * 
 * Parameter(s):
 * nums: An array of numbers.
 */
function modifyArray(nums) {
    return (nums.map(n => n = (n % 2 == 0) ? n * 2 : n * 3));
}


function main() {
    const n = +(readLine());
    const a = readLine().split(' ').map(Number);

    console.log(modifyArray(a).toString().split(',').join(' '));
}
