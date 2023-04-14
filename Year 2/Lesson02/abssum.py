a = int(input('podaj a: '))
b = int(input('podaj b: '))
c = int(input('podaj c: '))
d = int(input('podaj d: '))

res = 0
if (a-b < 0):
    res += a-b
else:
    res += -(a-b)

if (b-c < 0):
    res += b-c
else:
    res += -(b-c)

if (c-d < 0):
    res += c-d
else:
    res += -(c-d)


print(f'wynik: {res}')