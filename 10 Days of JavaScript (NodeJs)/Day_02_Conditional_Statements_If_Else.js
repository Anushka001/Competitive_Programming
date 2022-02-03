/* Task

Complete the getGrade(score) function in the editor. It has one parameter: an integer, score, denoting the number of points Julia earned on an exam. It must return the letter corresponding to her grade according to the following rules:

If 25 < score <= 30, then score = A.
If 20 < score <= 25, then score = B.
If 15 < score <= 20, then score = C.
If 10 < score <= 15, then score = D.
If 5 < score <= 10, then score = E.
If 0 <= score <= 5, then score = F.  */

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

function getGrade(score) {
    let grade;
    // Write your code here
    if (score > 25 && score <= 30) {
        return grade = 'A'
    }
    else if (score > 20 && score <= 25) {
        return grade = 'B'
    }
    else if (score > 15 && score <= 20) {
        return grade = 'C'
    }
    else if (score > 10 && score <= 15) {
        return grade = 'D'
    }
    else if (score > 5 && score <= 10) {
        return grade = 'E'
    }
    else if (score >= 0 && score <= 5) {
        return grade = 'F'
    }

    return grade;
}


function main() {
    const score = +(readLine());

    console.log(getGrade(score));
}
