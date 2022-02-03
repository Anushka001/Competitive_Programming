/*Function Description

Complete the getSecondLargest function.

getSecondLargest has the following parameters:
int nums[n]: an array of integers

Returns
int: the second largest number in nums

Input Format
The first line contains an integer, n, the size of the nums array.
The second line contains n space-separated numbers that describe the elements in nums.

Sample Input 0
5
2 3 6 6 5

Sample Output 0
5       */

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

/**
*   Return the second largest number in the array.
*   @param {Number[]} nums - An array of numbers.
*   @return {Number} The second largest number in the array.
**/
function getSecondLargest(nums) {
    // Complete the function
    let largest = 0;
    let secondlargest = 0;
    for (let i = 0; i < nums.length; i++) {
        if (nums[i] > largest) {
            secondlargest = largest;
            largest = nums[i]
        }
        if (nums[i] > secondlargest && nums[i] < largest)
            secondlargest = nums[i]
    }
    return secondlargest

}


function main() {
    const n = +(readLine());
    const nums = readLine().split(' ').map(Number);

    console.log(getSecondLargest(nums));
}
