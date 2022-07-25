k = int(input('podaj k: '))

for i in range(50, 101):
    if i % k == 0: 
        print(i)


n = int(input('podaj n: '))
m = int(input('podaj m: '))

for i in range(n, m+1):
    if i % k == 0: 
        print(i)

