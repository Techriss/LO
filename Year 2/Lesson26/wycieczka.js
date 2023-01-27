function check() {
    let money = parseInt(document.getElementById('money').value)
    let cost = parseInt(document.getElementById('cost').value)

    if (cost > money) {
        document.write('wez kredyt')
    }
    else {
        document.write('stac cie')
    }
}