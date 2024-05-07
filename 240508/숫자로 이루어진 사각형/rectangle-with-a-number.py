def print_rect(n):
    a = 0
    for _ in range(n):
        for _ in range(n):
            a += 1
            if( a == 10): 
                a = 1
            print(a,end=' ')
        print()

print_rect(int(input()))