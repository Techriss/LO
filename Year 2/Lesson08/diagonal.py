t = [[0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0]]

for i in range(4):
    for j in range(4):
        if i == j:
            t[i][j] = 1

for i in t:
    for j in i:
        print(j, end=' ')
    print()