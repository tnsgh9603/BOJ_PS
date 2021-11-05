l = []

def is_palindrome(s):
	return s == s[::-1]

def Do(s):
	if is_palindrome(s) and is_palindrome(str(int(s) * int(s))):
		l.append(int(s))

def sol(d, s):
	if len(d) > 53:
		return
	if len(d) > 0 and d[0] != '0':
		Do(d)
	for i in range(0, 4):
		if s + i * i * 2 > 9:
			break
		sol(str(i) + d + str(i), s + 2 * i * i)

sol("", 0)
sol("0", 0)
sol("1", 1)
sol("2", 4)
sol("3", 9)

l.sort()

t = int(input())
for i in range(0, t):
	x, y = map(int, input().split())
	ret = 0
	for j in l:
		if x <= j * j and j * j <= y:
			ret += 1
	print("Case #" + str(i+1) + ": " + str(ret))