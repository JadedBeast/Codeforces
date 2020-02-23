import string
letters=string.ascii_lowercase
test=input()
result=""
for x in test:
    if x in letters:
        if x not in result:
            result+=x
print(len(result))
