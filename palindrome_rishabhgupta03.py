a=input("enter the word : ")
l=len(a)
for i in range(int(l/2)):
    if a[i]==a[l-i-1]:
        r=1
    else:
        r=0
        break
if r==1:
    print ("word is palindrome")
else:
    print ("word is not palindrome")
