import sys

for _ in range(int(sys.stdin.readline())):
    l, r, n, m = map(int, sys.stdin.readline().split())
    if n == m:
        print('G')
    else:
        t = []
        if abs(n - m) <= l:
            t.append('L')
        if abs(n - m) <= r:
            t.append('R')
        print(t[0] if len(t) == 1 else 'E')
