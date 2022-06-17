

sum = 0
n = int(input('podaj n: '))

for i in range(2, n+1, 2):
    sum += i

print(f'suma: {sum}')