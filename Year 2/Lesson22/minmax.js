
let a = parseInt(prompt('podaj 5 liczb 0-20\na: '))
let b = parseInt(prompt('b: '))
let c = parseInt(prompt('c: '))
let d = parseInt(prompt('d: '))
let e = parseInt(prompt('e: '))

let sum = a + b + c + d + e

let max = Math.max(a, b, c, d, e);
console.log(max)

let min = Math.min(a, b, c, d, e)
console.log(min)

console.log(sum - min - max)



