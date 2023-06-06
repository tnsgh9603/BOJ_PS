f = lambda n: (f(n // 26 - 1) if n > 25 else '') + chr(n % 26 + 97)


def g(s):
    c = 0
    for i in s: c = c * 26 + ord(i) - 96
    return c


while (s := input()) != '*':
    if s[0] > '9':
        v, w = s, g(s)
    else:
        v, w = f(int(s) - 1), int(s)
    print('%-22s%s' % (v, format(w, ',')))
