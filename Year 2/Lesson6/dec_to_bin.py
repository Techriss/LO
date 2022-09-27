d = int(input("licza dziesietna: "))

print(bin(d))

arr = []
while (d >= 1):
    arr.append(d % 2)
    d //= 2


arr.reverse()
print("liczba binarna: ", end='')

for i in arr:
    print(i, end='')