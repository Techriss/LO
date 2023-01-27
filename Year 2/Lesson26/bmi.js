function bmi() {
    let w = parseFloat(document.getElementById('w').value)
    let h = parseFloat(document.getElementById('h').value)
    
    let bmi = w / (h*h)
    document.write(bmi)
}