t = int(input())

while t > 0:
    t -= 1
    x, y = input().split(' ')
    x, y = int(x), int(y)
    print('YES') if x >= y else print('NO')
