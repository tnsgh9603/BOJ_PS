N, Y = map(int, input().split())
a = set([int(input()) for _ in range(Y)])
for i in range(N):
    if i not in a:
        print(i)

print("Mario got %d of the dangerous obstacles." % (len(a)))
