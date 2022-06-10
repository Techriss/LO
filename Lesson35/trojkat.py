a = int(input('podaj bok a:'))
b = int(input('podaj bok b:'))
c = int(input('podaj bok c:'))

if a + b > c and a + c > b and b + c > a:
    print('mozna')
else:
    print('nie mozna')