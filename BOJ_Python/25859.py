import sys

line = sys.stdin.readline().strip()
s = 'abcdefghijklmnopqrstuvwxyz'
line = [s.find(x) for x in line]
arr = len(s) * [0]
for ch in line:
    arr[ch] += 1
ans = ''
while True:
    mx = 0
    c = -1
    for i in range(0, len(arr)):
        if arr[i] > mx:
            mx = arr[i]
            c = i
    if mx == 0:
        break
    for i in range(0, arr[c]):
        ans += s[c]
    arr[c] = 0
print(ans)