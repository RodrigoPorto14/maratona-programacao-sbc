import re

string = input()
string = re.sub("[^a|e|i|o|u]","",string)

if(string==string[::-1]):
    print('S')
else:
    print('N')