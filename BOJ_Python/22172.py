import sys

n = int(sys.stdin.readline())
a = [x - 1 - i for i, x in enumerate(map(int, sys.stdin.readline().split()))]
x, y = max(a), min(a)
print(x - y + min(x, -y))