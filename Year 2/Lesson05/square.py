n = int(input("bok kwadratu: "))

# n rzedow
for k in range(1, n+1):
    # n kolumn
    i = 1
    while i <= n:
        # raz *
        print('*', end='')
        i += 1
        
        # raz -
        if i <= n:
            print('-', end='')
            i += 1

    print()