# 1
n = int(input("podaj liczbe naturalna: "))
for i in range(0, n):
    print(f'kwadrat {i}: {i*i}')

# 2
n = int(input("podaj liczbe naturalna n: "))
sum = 0
for i in range(n):
    x = int(input("podaj liczbe naturalna: "))
    sum += x

print(f'srednia arytmetyczna wynosi {(sum/n)}')


# 3
m = int(input("podaj liczbe naturalna m: "))
power = 1
print(power)
while (power <= m):
    power *= 3
    print(power)


# 4
n = int(input("podaj liczbe: "))
if n % 3 == 0 and n % 4 == 0:
    print('hurra')
elif n % 3 == 0:
    print('liczba podzielna przez 3')
elif n % 4 == 0:
    print('liczba podzielna przez 4')
else:
    print('*')


# 5
n = int(input("podaj liczbe naturalna: "))

def tree(n):
    for i in range(1, n+1):
        print(i * '#')

for i in range(1, n+1):
    tree(i)

# 6
n = int(input("podaj liczbe naturalna: "))
for i in range(1, (n*2)+1, 2):
    print((((n*2)-i) // 2) * ' ', end='')

    print((i // 2) * '*', end='')
    if (i > 1):
        print('|', end='')
    else:
        print('*', end='')
    print((i // 2) * '*')
     

    



    