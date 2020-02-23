word=input()
distinct=""
for x in word:
    if x not in distinct:
        distinct+=x
if(len(distinct)%2==0):   
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
