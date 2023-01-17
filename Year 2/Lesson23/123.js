/*
    1
    11
    111
   +
    123
*/


let n = parseInt(prompt('podaj n: '))

let sum = 0
for (let i = 1; i <= n; i++) {
    sum += i * Math.pow(10, n-i)
}

console.log(sum)