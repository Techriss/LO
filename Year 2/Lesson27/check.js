function check() {
    let n = parseInt(document.getElementById('pole').value)
    if (n >= 1 && n <= 10) {
        document.write('liczba jest w przedziale 1-10')
    }
    else {
        document.write('liczba nie jest w przedziale 1-10')
    }
}