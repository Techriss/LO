function add(a, b) {
    return a + b
}

function subtract(a, b) {
    return a - b
}

function multiply(a, b) {
    return a * b
}

function divide(a, b) {
    if (b == 0) console.log('nie');
    else return a / b
}

let c = divide(1, 3)
console.log(c)