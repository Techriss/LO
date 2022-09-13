x = int(input("podaj x: "))
y = int(input("podaj y: "))

sum = 0

for i in range(x, y+1):
    if i % 2 != 0:
        sum += i

print(sum)