function show() {
    let a = document.getElementById('a').value
    let b = document.getElementById('b').value

    let text = ""
    for (let i = a; i <= b; i++) {
        text += `${i} `;
    }

    document.getElementById('result').innerHTML = text
}