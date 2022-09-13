n = int(input("podaj n: "))

pow = 1

for i in range(1, n+1):
    # pow = pow << 1
    pow *= 2
    print(pow)