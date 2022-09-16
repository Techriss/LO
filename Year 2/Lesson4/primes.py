import math

a = int(input("a: ")) 
b = int(input("b: "))
    
print(f"Prime numbers between {a} and {b} are: ")

count = 0
for i in range(a, b + 1):
    if (i == 1):
        continue

    prime = True
    
    # od 2 do połowy i
    for j in range(2, i // 2 + 1):
        # jesli i dzieli sie przez j, nie jest pierwsza
        if (i % j == 0):
            prime = False
            break

    # pierwsza 
    if (prime):
        count += 1

print(f'liczb jest {count}')
    


