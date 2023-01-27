function triangle() {
    let a = parseInt(document.getElementById('a').value)
    let b = parseInt(document.getElementById('b').value)
    let c = parseInt(document.getElementById('c').value)

    if (a + b > c && a + c > b && b + c > a) {
        document.write('chyba mozesz')
    }
    else {
        document.write('chyba nie')
    }
}