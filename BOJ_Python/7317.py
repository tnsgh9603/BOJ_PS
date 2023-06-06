import sys

T = int(sys.stdin.readline())
for i in range(T):
    n = int(sys.stdin.readline())
    arr = []
    temp1 = 30
    temp2 = n
    while temp1 >= 0:
        while (2 ** (temp1 + 1)) - 1 <= n:
            arr.append(temp1)
            n -= (2 ** (temp1 + 1)) - 1
        temp1 -= 1
    arr = arr[::-1]
    print("{} [{}]".format(temp2, ",".join([str(x) for x in arr])))