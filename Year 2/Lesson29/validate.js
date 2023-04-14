function double(s) {
    var flag = false;

    if (s.length < 2) return false;

    for (let i = 0; i < s.length-1; i++) {
        if (s.charAt(i) == s.charAt(i+1)) {
            flag = true;
        }
    }

    return flag;
}

function check() {
    let s = document.getElementById('input').value;
    let correct = double(s);

    if (correct) {
        document.getElementById('result').innerHTML = 'tak'
    }
    else {
        document.getElementById('result').innerHTML = 'nie'
    }
}