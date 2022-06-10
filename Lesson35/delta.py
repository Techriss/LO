import math

a = int(input('podaj a: '))
b = int(input('podaj b: '))
c = int(input('podaj c: '))

# delta = b^2 - 4ac
d = b*b - 4*a*c

if d > 0:
    # x1 = (-b - math.sqrt(d))/(2*a)
    # x2 = (-b + math.sqrt(d))/(2*a)
    # print(f'rozwiazanie to {x1} i {x2}')
    print('2 rozwiazanie')
elif d == 0:
    # x0 = -b/(2*a)
    # print(f'rozwiazanie to {x0}')
    print('1 rozwiazanie')
else:
    print('brak rozwiazan')