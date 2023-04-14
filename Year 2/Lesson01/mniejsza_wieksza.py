a = int(input("liczba 1: "))
b = int(input("liczba 2: "))

res = 0

if (a < b):
    res = b/a
elif (a > b):
    res = a/b
else:
    res = 1


print(f"liczba mniejsza miesci sie we wiekszej {res} razy")    