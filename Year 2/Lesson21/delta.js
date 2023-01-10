let a = parseInt(prompt('podaj a'))
let b = parseInt(prompt('podaj b'))
let c = parseInt(prompt('podaj c'))

let delta = (b*b) - (4*a*b)
let miejsca = 0

if (delta < 0) miejsca = 0
else if (delta == 0) miejsca = 1
else miejsca = 2


console.log(`funkcja ma ${miejsca} m. zer.`)