l = [[0, 0, 0], [0, 0, 0]]

for i in range(2):
    for j in range(3):
        l[i][j] = int(input("wprowadz liczbe: "))

for i in l:
    for j in i:
        print(j, end='')
    print()


sum = 0
for i in range(2):
    for j in range(3):
        if i % 2 == 0:
            sum += l[i][j]
print(f'suma elementow ktorych indeks wiersza jest parzyszty wynosi {sum}')


for i in range(2):
    for j in range(3):
        if l[i][j] < 0:
            l[i][j] -= 2

tak = True
for i in l:
    for j in i:
        if j >= 10:
            tak = False
            print('istnieje liczba nie mniejsza od 10')
            break
    if tak == False:
        break
if tak == True:
    print('wszystkie liczby sa mniejsze od 10')
    


