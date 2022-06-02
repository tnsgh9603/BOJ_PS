import sys

input = sys.stdin.readline
for t in range(int(input())):
    a = input()
    b = input()
    print(f'Case #{t + 1}:', end=' ')
    c = list(a)
    for i in range(len(b) - 1, -1, -1):
        if len(c) == 0:
            break
        if b[i] == c[-1]:
            c.pop()
    if len(c) == 0:
        print(len(b) - len(a))
    else:
        print('IMPOSSIBLE')
