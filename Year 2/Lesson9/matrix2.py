n = int(input("podaj liczbe 1-10: "))

for i in range(n):
    for j in range(0, n*10, 10):
        print(j + i, end=' ')
    print()