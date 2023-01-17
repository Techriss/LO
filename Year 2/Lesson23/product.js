var arr = new Array(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)

let product = 1

for (let i = 0; i < arr.length; i++) {
    if (arr[i] % 3 == 0) {
        product *= arr[i]
    }
}

console.log(product)