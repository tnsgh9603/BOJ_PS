import sys

n = int(sys.stdin.readline())


def fibo(k):
    x, y = 0, 1
    for i in range(k):
        x, y = y, x + y
    return x


print("%d" % fibo(n))
