import string
first="qwertyuiopasdfghjkl;zxcvbnm,./"
lr=input()
message=input()
result=""
switch=1
if (lr=="R"):
    switch=-1
for x in message:
    if x in first:
        result+=first[first.index(x)+switch]
print(result)
####################################################
