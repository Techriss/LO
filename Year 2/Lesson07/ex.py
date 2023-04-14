l = [[0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0]]


#1
for i in range(0, 3):
    for j in range(0, 4):
        l[i][j] = int(input("wprowadz liczbe: "))

#2
for i in l:
    for j in i:
        print(j,end=' ')
    print()

#3
product = 1
for i in l:
    for j in i:
        if j % 7 != 0:
            product *= j
print(f'iloczyn liczb niepodzielnych przez 7 wynosi {product}')

#4
end = False
for i in l:
    for j in i:
        if j > 4:
            print('istnieje liczba wieksza od 4')
            end = True
            break
    if end == True:
        break
if end == False:
    print('nie istnieje liczba wieksza od 4')

#5
sum = 0
for i in range(3):
    for j in range(4):
        if i*j > 0:
            sum += 1
print(f'liczb ktorych iloczyn indeksow jest dodatni jest {sum}')

            

        


