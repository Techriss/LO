n = int(input('podaj n: '))
m = int(input('podaj m: '))

for i in range(n, m+1):
    if i % 3 == 0:
        print('podzielne przez 3')
    if i % 4 == 0:
        print('podzielne przez 4')
    if i % 12 == 0: 
        print('hurra')
    else:
        print('*')