import bisect
import sys

input = sys.stdin.readline
n = int(input())
arr = []
for i in range(n) :
    arr.append(int(input()))
arr.sort()
sum = 0
for i in range(n) :
    for j in range(i + 1, n) :
        dist = arr[j] - arr[i]
        lo = arr[j] + dist
        hi = arr[j] + dist * 2
        left = bisect.bisect_left(arr, lo)
        right = bisect.bisect_right(arr, hi)
        sum += right - left
print(sum)