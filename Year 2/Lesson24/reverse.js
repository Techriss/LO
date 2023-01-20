var arr = new Array()
for (let i = 0; i < 10; i++) {
    arr.push(parseInt(prompt('podaj liczbe: ')))
}

console.log(arr)

for (let i = 0; i < 10/2; i++) {
    // albo tak

    // let tmp = arr[i]
    // arr[i] = arr[10-i-1]
    // arr[10-i-1] = tmp


    // albo tak
    [arr[i], arr[10-i-1]] = [arr[10-i-1], arr[i]]
}

console.log(arr)
