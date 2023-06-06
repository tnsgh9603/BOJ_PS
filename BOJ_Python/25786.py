def sol(a, b):
    if a <= 2 and b <= 2:
        return 0
    if a >= 7 and b >= 7:
        return 0
    return 9


x = input()
y = input()
sz = max(len(x), len(y))
while len(x) < sz:
    x = "0" + x
while len(y) < sz:
    y = "0" + y
for i in range(sz):
    print(sol(ord(x[i]) - ord('0'), ord(y[i]) - ord('0')), end="")
