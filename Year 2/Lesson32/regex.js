const slowokonczysienaxluby = /([a-z]|[A-Z])*(x|y|X|Y)$/
const czyslowozawoeraalubb = /([a-z]|[A-Z])*a|b|A|B([a-z]|[A-Z])*/

const id2 = /^([a-f]|[0-9]|[A-Z]){24}$/
const id1 = /^([a-f0-9A-Z]){24}$/

const birth1 = /^([0-9]{2}\.){2}[0-9]{4}$/
const birth2 = /^([0-9]{2}(\.|\-|\/)){2}[0-9]{4}$/




function check() {
    const name = document.getElementById("imie").value;
    const regex = /^[a-zA-Z]+$/

    const res = regex.test(name);
    document.write(res ? "poprawnie" : "niepoprawne imie")

}