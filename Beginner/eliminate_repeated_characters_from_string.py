string=input()
string_without_repeated_characters=""
for i in string:
    if i in string_without_repeated_characters:
        continue
    else:
        string_without_repeated_characters+=i
print(string_without_repeated_characters)
    
