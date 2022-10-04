t = []

m = int(input("podaj m: "))
n = int(input("podaj n: "))

for i in range(m):
    t.append([])
    for j in range(n):
        t[i].append(int(input("wprowadz liczbe: ")))

for i in t:
    for j in i:
        print(j, end=' ')
    print()

sum = 0
for i in range(m):
    for j in range(n):
        if (i % 2 != 0):
            sum += t[i][j]

print(f'suma liczb gdzie wiersz jest nieparzysty wynosi {sum}')

for i in range(m):
    for j in range(n):
        if t[i][j] < 0:
            t[i][j] -= 2

flag = True
for i in range(m):
    for j in range(n):
        if t[i][j] >= 10 and flag == True:
            print("liczba wieksza od 10")
            flag = False
if flag == True:
    print("nie ma liczby wiekszej od 10")
