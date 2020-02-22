import re
word=input()
result=re.search("h+[\w]*e+[\w]*l+[\w*]*l+[\w*]*o",word)
if result:
    print("YES")
else:
    print("NO")
