let n = parseInt(prompt('n: '))

let sum = 0
for (let i = 0; i < n; i++) {
    sum += Math.pow(10, i)
}

console.log(sum)