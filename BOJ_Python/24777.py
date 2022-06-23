import sys

I = sys.stdin.readline().split() + sys.stdin.readline().split() + sys.stdin.readline().split() + sys.stdin.readline().split()


def chk(a, b, c):
    return all(x == y == z or (x != y and x != z and y != z) for x, y, z in zip(a, b, c))


cnt = 0
for a in range(12):
    for b in range(a + 1, 12):
        for c in range(b + 1, 12):
            if chk(I[a], I[b], I[c]):
                cnt += 1
                print(a + 1, b + 1, c + 1)
if cnt == 0:
    print("no sets")
