// const s = 'ala ma kota'
const s = 'kot'
const regex1 = /kot/
const regex2 = /Kot/
const regex3 = /kot$/
const regex4 = /^[a-z][a-z][a-z]$/     // 3 litery 
const regex5 = /^[a-z]*$/              // iles liter
const regex6 = /^[a-z]{5}$/            // 5 liter

const str = prompt('imie: ')
const regex = /^[a-z]{3,12}/

const number = prompt('podaj number: ')
const regexnum = /^[0-9]{9}$/
const regexcode = /^[4-9]{4}$/

const rakrokryk1 = /^r.k$/
const rakrokryk2 = /^r[a-z]k$/

const a = regex1.test(s)
const b = regex2.test(s)
const c = regex3.test(s)

console.log(a) // true
console.log(b) // false
console.log(c) // false


/*
    ^     - poczatek calego stringa
    $     - koniec calego stringa
    [a-z] - litery od a do z (male)
    [A-Z] - litery od a do z (duze)
    [0-9] - liczby od 0 do 9
    *     - kwantyfikator
                co jest przed nim ma byc powtorzone 0 lub wiecej razy
    +     - kwantyfikator 
                co jest przed nim ma byc powtorzone 1 lub wiecej razy
    ?     - kwantyfikator
                co jest przed nim ma byc powtorzone 0 lub 1 raz
    {}    - kwantyfikator
                co jest przed nim ma byc powtorzone iles razy
                np.
                    {1}      - 1 raz
                    {1,3}   - od 1 do 3 razy
                    {5,}     - od 5 wiecej
    |     - alternatywa (lub)
                np. 
                    x | y    - x albo y
    \     - znak wykluczajacy (escape character)
                np.
                    zeby wyszukac $ na koncu
    .     - dowolny znak
*/