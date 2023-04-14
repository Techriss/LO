l = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]

p = 1
for i in range(0, 10):
    if l[i] < 6:
        p *= l[i]

print(f'iloczyn liczb mniejszych od 6 to {p}')