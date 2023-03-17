function check() {
    const date = document.getElementById('date');
    // miesiac 1-12
    const regex = /^[0-9]{2}\.([1-9]|(1[0-2]))\.[0-9]{4}$/;
    const res = regex.test(date);

    /// ...

}

function number() {
    const regex = /^\+[0-9]{11}$/
    const mac = /^([0-9A-Z]){2}(\-(([0-9A-Z]){2})){5}$/
}