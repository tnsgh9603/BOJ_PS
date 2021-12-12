import sys

n = int(sys.stdin.readline())
sum = 0
sub = 0
list = list(map(int, sys.stdin.readline().split()))
for i in range(n) :
    sum += list[i]
    sub += list[i] * list[i]
print(((sum * sum - sub) // 2) % 1000000007)