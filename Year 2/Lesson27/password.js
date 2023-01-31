function check() {
    let login = document.getElementById('login').value
    let password = document.getElementById('password').value

    if (login == "" && password == "") {
        alert('nic nie wpisales')
    }
    else if (login == "login" && password == "password") {
        alert('dobrze')
    }
    else if (login.length <= 8) {
        alert('login jest krotszy od 8 znakow')
    }
    else {
        alert('zle')
    }
}