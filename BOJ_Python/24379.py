import sys

a, b, c = map(int, sys.stdin.readline().split())
d, e, f = map(int, sys.stdin.readline().split())
sum = int(sys.stdin.readline())

cnt = 0

if a * d + b * e + c * f <= sum:
    print(d + e + f)
else:
    arr = [[a, d], [b, e], [c, f]]
    arr.sort(key=lambda x: x[0])
    for i in range(3):
        if arr[i][0] * arr[i][1] <= sum:
            cnt += arr[i][1]
            sum -= arr[i][0] * arr[i][1]
        else:
            cnt += sum // arr[i][0]
            break
    print(cnt)
