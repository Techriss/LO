# 1 - predkosc z km/h na m/s
v = int(input("podaj prekosc w km/h: "))
v = v / 3.6
print(f'predkosc w m/s wynosi {v}')


# 2 - 3 liczby z klawiatury w kolejnosci rosnacej
a = int(input("podaj liczbe a: "))
b = int(input("podaj liczbe b: "))
c = int(input("podaj liczbe c: "))

if a <= b and a <= c:
    print(a)
    if (b <= c):
        print(b)
        print(c)
    else:
        print(c)
        print(b)
elif b <= a and  b <= c:
    print(b)
    if (a <= c):
        print(a)
        print(c)
    else:
        print(c)
        print(a)
else:
    print(c)
    if (a <= b):
        print(a)
        print(b)
    else:
        print(b)
        print(a)


# 3 - ile salatki dla x osob jesli znamy ile dla y osob
x = int(input("ile osob to x: "))
y = int(input("ile osob to y: "))
ys = int(input("ile salatki dla y osob: "))
xs = (ys / y) * x

print(f"dla {x} osob potrzeba {xs} salatki")


# 4 - punkty klasy
p = int(input("podaj aktualne punkty: "))
f = int(input("podaj frekwencje (w %): "))
avg = float(input("podaj srednia: "))

if f > 94 and avg >= 4.0:
    p += 20

print(f"nowa wartosc punktow wynosi {p}")


# 5 - najmniejsza z 3 liczb
a = int(input("podaj liczbe a: "))
b = int(input("podaj liczbe b: "))
c = int(input("podaj liczbe c: "))
mini = 0

if a <= b and a <= c:
    mini = a
elif b <= c and b <= a:
    mini = b
else:
    mini = c

print(f"najmniejsza liczba wynosi {mini}")


# 6 - obj walca o wysokosci h i promieniu r; dla liczb niedodatnich blad
h = int(input("podaj wysokosc walca: "))
r = int(input("podaj promien podstawy walca: "))

if (h <= 0 or r <= 0):
    print("blad - niepoprawne wartosci")
else:
    p = 3.14 * r * r * h
    print(f'pole walca wynosi {p}')




