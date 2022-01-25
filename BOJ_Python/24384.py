import sys, math

n = int(sys.stdin.readline())
s = ""
k = 1
while len(s) < n:
    s += str(int(math.pow(k, 3)))
    k += 1
print(s[n - 1])