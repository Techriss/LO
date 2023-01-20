var arr = new Array()
for (let i = 0; i < 10; i++) {
    arr.push(parseInt(prompt('podaj liczbe: ')))
}

console.log(arr)


// albo n = 2n+1
for (let i = 0; i < 10; i++) {
    if (arr[i] % 2 == 0) {
        arr[i]--;
    }
}

console.log(arr)
