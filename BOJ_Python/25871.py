def sol(val, badlist):
    if val == 0:
        return not (val in badlist)
    while val > 0:
        digit = val % 10
        if digit in badlist:
            return False
        val //= 10
    return True


line = input("").split()
badlist = []
for i in range(1, len(line)):
    badlist.append(int(line[i]))
target = int(input(""))
res = 1000
for i in range(0, 1000):
    if sol(i, badlist):
        res = min(res, abs(i - target))
print(res)
