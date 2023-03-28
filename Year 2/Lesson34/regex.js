const image = /^img\-[0-9]{3}\.((jpg)|(gif)|(tif)|(png))$/

/*
    \d - kazdy znak bedacy cyfra
    \D - kazdy znak niebedacy cyfra
    \w - kazdy znak bedacy litera
    \W - kazdy znak niebedacy litera
    \s - znak spacji, tabulacji, nowego wiersza
    \S - znak niebedacy spacja, tabulacja, nowym wierszem
*/

const price = /^(\d)+(\s)?(PLN)|(EUR)$/
const real = /^(\d)+(\.)?(\d)*$/
const para = /^<p>.*<\/p>$/
const http = /^http(s)?:\/\/((\w)|(\d))+\.(\w){2,}$/
const scinot = /^(\d)\.(\d){1,5}(E|e)\+(\d){1,2}$/
const dolar = /^\$(\w)+$/