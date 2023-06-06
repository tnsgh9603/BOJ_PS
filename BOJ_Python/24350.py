from math import comb
n, k = map(int, input().split())
ans = str(comb(n, k)).count("0")
print(ans)