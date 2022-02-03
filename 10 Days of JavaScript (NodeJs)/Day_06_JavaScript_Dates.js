/*Task
Given a date string, dateString, in the format MM/DD/YYYY, find and return the day name for that date. Each day name must be one of the following strings: Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, or Saturday. For example, the day name for the date 12/07/2016 is Wednesday.

Input Format
Locked stub code in the editor reads the following input from stdin:
The first line contains an integer, d, denoting the number of dates to check.
Each line i of the d subsequent lines contains a date in MM/DD/YYYY format; each date denotes some dateString that is passed to the function.

Output Format
The function must return a string denoting the day of the week corresponding to the date denoted by dateString.

Sample Input 0
2
10/11/2009
11/10/2010

Sample Output 0
Sunday
Wednesday    */

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

// The days of the week are: "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
function getDayName(dateString) {
    let dayName = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];
    // Write your code here
    let day = new Date(dateString).getDay();
    return dayName[day];
}


function main() {
    const d = +(readLine());

    for (let i = 0; i < d; i++) {
        const date = readLine();

        console.log(getDayName(date));
    }
}
