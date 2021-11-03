from decimal import Decimal, getcontext
r, n = input().split(' ')
getcontext().prec = 1101
print("{0:f}".format(Decimal(r) ** int(n)))