"""
Move the first letter of each word to the end of it, 
then add "ay" to the end of the word. 
Leave punctuation marks untouched.

Examples
pig_it('Pig latin is cool') # igPay atinlay siay oolcay
pig_it('Hello world !')     # elloHay orldway !
"""


def Process_string(string):
    words=string.split(" ")
    result=[]
    for word in words:
        if word in ['!',',','"',"'",'.']:
            result.append(word)
            continue
        result.append(word[1:]+word[0]+"ay")
    return " ".join(result)


s=input("Enter string: ")
r=Process_string(s)
print("The processed string is:",r)

