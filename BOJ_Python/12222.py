def nCk(n, k):
    if k > n:
        return 0
    res = 1
    for i in range(1, min(n - k, k) + 1):
        res = res * (n - i + 1) // i
    return res
def max_foods(D, A, B):
    cnt = 0
    for L in range(min(51, D // B + 1)):
        K_min = (D - L * B - B) // A + 1
        K_max = (D - L * B) // A
        cnt += nCk(K_max + L + 1, L + 1) - nCk(K_min + L, L + 1)
    return cnt
def min_days(N, A, B):
    left = 0
    right = int(1e15)
    while left < right:
        D = (left + right) // 2
        if max_foods(D, A, B) >= N:
            right = D
        else:
            left = D + 1
    return left
for case in range(int(input())):
    print("Case #%d: %d" % (case + 1, min_days(*map(int, input().strip().split()))))
