let n = parseInt(prompt('liczby parzyste do n=? '))

let sum = 0
for (let i = 2; i <= n; i += 2) {
    sum += i;
}

console.log(sum)