MAX_N = 10 ** 6
prime = 10 ** 9 + 7

fc = [1]
for i in range(1, MAX_N + 1):
    fc.append((fc[-1] * i) % prime)

inv_fc = [pow(x, prime - 2, prime) for x in fc]

D = [1, 0]
for i in range(2, MAX_N + 1):
    D.append((i - 1) * (D[i - 1] + D[i - 2]) % prime)

def C(n, k):
    return (fc[n] * inv_fc[k] * inv_fc[n - k]) % prime

def f(N, X):
    return (pow(C(N, X), 2, prime) * fc[X] * fc[N - X] * D[N - X]) % prime

def campinatorics(N, X):
    return sum(f(N, i) for i in range(X, N + 1)) % prime

for case in range((int)(input())):
    # Read the input.
    N, X = map(int, input().strip().split())
    print("Case #%d: %d" % (case+1, campinatorics(N, X)))