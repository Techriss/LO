# 1
T = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
for i in range(10):
    T[i] = T[i]*T[i]*T[i]
for i in T:
    print(i, end=' ')


# 2
T = [-5, -4, -3, -2, -1, 0, 1, 2, 3, 4]
for i in range(10):
    if (T[i] < 0):
        T[i] = 0
for i in T:
    print(i, end=' ')


# 3
T = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
for i in range(10):
    if (i % 2 != 0):
        print(T[i], end=' ')
    
# 4
T = [[1, 2, 3, 4], [5, 6, 7, 8], [9, 10, 11, 12], [13, 14, 15, 16]]

r1 = int(input('podaj 1 wiersz do zamiany (0-3): '))
r2 = int(input('podaj 2 wiersz do zamiany (0-3): '))
for j in range(4):
    T[r1][j], T[r2][j] = T[r2][j], T[r1][j]

c1 = int(input('podaj 1 kolumnę do zamiany (0-3): '))
c2 = int(input('podaj 2 kolumnę do zamiany (0-3): '))
for i in range(4):
    T[i][c1], T[i][c2] = T[i][c2], T[i][c1]


# 5
T1 = [5, 6, 2, 2, 3]
T2 = [0, 1, 2, 3, 4]
T3 = []

for i in range(5):
    T3.append(T1[i] + T2[i])


# 6
T = []

for i in range(4):
    T.append([])
    for j in range(3):
        T[i].append(int(input('podaj liczbe: ')))

for i in T:
    for j in i:
        print(j, end=' ')
    print()

product = 1
for i in T:
    for j in i:
        if (j % 5 == 0):
            product *= j
print(f'iloczyn liczb podzielnych przez 5 wynosi {product}')

for i in range(4):
    for j in range(3):
        if (T[i][j] < 7):
            T[i][j] += 3

for i in T:
    min = i[0]
    min_count = 0

    for j in i:
        if (j < min):
            min = j
    for j in i:
        if (min == j):
            min_count += 1

    print(f'we wierszu {i} minimum wynosi {min} i wystepuje {min_count} razy')
