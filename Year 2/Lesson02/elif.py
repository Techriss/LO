x = int(input('wprowadz liczbe: '))
res = 0

if x < 1:
    res = x * 2
elif x == 1:
    res = -10
elif x == 3:
    res = (x-1)*(x-1)*(x-1)*(x-1)
else:
    res = 0

print(f'wynik: {res}')