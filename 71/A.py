rep=int(input())
for i in range (rep):
    word=input()
    length=len(word)
    if(length<=10):
        print(word)
    else:
        print(word[0]+str(length-2)+word[length-1])
