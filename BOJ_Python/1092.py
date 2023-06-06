import sys

N = int(sys.stdin.readline())
ship = list(map(int, sys.stdin.readline().split()))

M = int(sys.stdin.readline())
box = list(map(int, sys.stdin.readline().split()))

ship.sort(reverse=True)
box.sort(reverse=True)

if ship[0] < box[0]:
    print(-1)
    exit()

cnt = 0
while len(box) > 0:
    cnt += 1
    for i in ship:
        for j in range(len(box)):
            if i >= box[j]:
                del box[j]
                break
print(cnt)