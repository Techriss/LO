let w = parseInt(prompt('podaj mase w kg'))
let h = parseInt(prompt('podaj wzrost w m'))

let bmi = w/(h*h)
console.log(`twoje bmi to ${bmi} wiec`)

if (bmi < 16) console.log('jestes wyglodzony')
else if (bmi < 18) console.log('jestes wychudzony')
else if (bmi < 25) console.log('jestes niedowazony')
else if (bmi < 30) console.log('jestes optymalny')
else if (bmi < 40) console.log('jestes otyly 1')
else if (bmi < 50) console.log('jestes otyly 2')
else console.log('jestes otyly 3')


