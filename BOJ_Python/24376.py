import sys

x, n = map(int, sys.stdin.readline().split())
temp = 1
s = "1"
while len(s) <= n:
    temp *= x
    s += str(temp)
print(s[n - 1])
