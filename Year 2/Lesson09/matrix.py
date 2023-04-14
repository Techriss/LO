n = int(input("podaj liczbe 1-10: "))

for i in range(0, n*10, 10):
    for j in range(n):
        print(j + i, end=' ')
    print()