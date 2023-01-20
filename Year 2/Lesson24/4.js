var arr = new Array()
for (let i = 0; i < 10; i++) {
    arr.push(parseInt(prompt('podaj liczbe: ')))
}

console.log(arr)

for (let i = 0; i < 10; i++) {
    arr[i] = Math.pow(arr[i], 4)
}

console.log(arr)