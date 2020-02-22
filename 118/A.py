vowels={'a','o', 'y', 'e', 'u', 'i'}
word=input().lower()
for i in word :
    if i in vowels:
        word=word.replace(i,'')
result=""
for x in word:
    result=result+"."+x	
print(result)

    
