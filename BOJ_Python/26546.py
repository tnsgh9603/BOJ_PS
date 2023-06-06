import sys

input = sys.stdin.readline
n = int(input())
for i in range(n):
    a, b, c = input().split()
    print(a[:int(b)] + a[int(c):])
