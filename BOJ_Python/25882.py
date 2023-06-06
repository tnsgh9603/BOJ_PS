arr = ["           ", " abcdefghi ", " jklmnopqr ", " stuvwxyz  ", "           "]
mp = {}
for i in range(3):
    for j in range(9):
        mp[arr[i + 1][j + 1]] = arr[i][j:j + 3] + arr[i + 1][j:j + 3] + arr[i + 2][j:j + 3]

T = int(input())
for tc in range(T):
    words = input().split(" ")
    if words[0] == words[1]:
        print(1)
    elif len(words[0]) != len(words[1]):
        print(3)
    else:
        status = 2
        for i in range(len(words[0])):
            if words[0][i] not in mp[words[1][i]]:
                status = 3
                break
        print(status)