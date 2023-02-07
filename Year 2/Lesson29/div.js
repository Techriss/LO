function check() {
    let dzielna = document.getElementById('a').value
    let dzielnik = document.getElementById('b').value

    document.getElementById('modulo').innerHTML = dzielna % dzielnik

    if (dzielna % dzielnik == 0) {
        document.getElementById('result').innerHTML = `${dzielna} jest podzielne przez ${dzielnik}`
    }
    else  {
        document.getElementById('result').innerHTML = `${dzielna} nie jest podzielne przez ${dzielnik}`
    }
}