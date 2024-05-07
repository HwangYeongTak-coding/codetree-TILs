def print_rect(n,m):
    for _ in range(n):
        print( "1" * m)

a,b = input().split()
print_rect(int(a),int(b))