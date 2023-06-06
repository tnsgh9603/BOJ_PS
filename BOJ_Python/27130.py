a = input()
b = input()
print(a)
print(b)
for i in range(len(b)):
    print(int(a) * int(b[len(b) - 1 - i]))
print(int(a) * int(b))
