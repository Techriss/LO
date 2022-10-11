t = []

for i in range(5):
    t.append([])
    for j in range(6):
        t[i].append(i+j)
    

for i in t:
    for j in i:
        print(j, end=' ')
    print()


for i in range(5):
    t[i][1], t[i][2] = t[i][2], t[i][1]

for i in t:
    for j in i:
        print(j, end=' ')
    print()

a = int(input("podaj 1 wiersz 0-4: "))
b = int(input("podaj 2 wiersz 0-4: "))

for i in range(6):
    t[a][i], t[b][i] = t[b][i], t[a][i]

for i in t:
    for j in i:
        print(j, end=' ')
    print()

