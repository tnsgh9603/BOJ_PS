arr = []
while True :
    s = input()
    arr.append(s)
    if s == "TTYL" :
        break
for i in arr :
    if i == "CU" :
        print("see you")
    elif i == ":-)":
        print("I’m happy")
    elif i == ":-(":
        print("I’m unhappy")
    elif i == ";-)":
        print("wink")
    elif i == ":-P":
        print("stick out my tongue")
    elif i == "(~.~)":
        print("sleepy")
    elif i == "TA":
        print("totally awesome")
    elif i == "CCC" :
        print("Canadian Computing Competition")
    elif i == "CUZ" :
        print("because")
    elif i == "TY" :
        print("thank-you")
    elif i == "YW":
        print("you’re welcome")
    elif i == "TTYL":
        print("talk to you later")
    else :
        print(i)