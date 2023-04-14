function check() {
    let a = parseInt(document.getElementById('a').value)
    let b = parseInt(document.getElementById('b').value)
    let c = parseInt(document.getElementById('c').value)

    let delta = (b*b) - (4*a*c)
    let text = ""

    if (delta < 0) text = "brak miejsc zerowych"
    else if (delta == 0) text = "1 miejsce zerowe"
    else text = "2 miejsca zerowe"

    document.getElementById('res').innerHTML = text

}