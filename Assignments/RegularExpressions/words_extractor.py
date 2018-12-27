'''
Michael Steven Towns
CSC 330 -  Programming Languages
2/20/17
'''

'''
This requires Python 2.7
run this using the command "python words_extractor.py < input.txt"
assuming the input file is called "input.txt"
'''

import re,sys #re is used for regular expressions and sys is used for file I/O


expr1=re.compile("[a-zA-Z0-9_]+$") #this takes and string of alphanumeric characters and the _ character in any order
# [a-zA-Z0-9_] = The group of alphanumeric characters plus _
# + repeat the group at least once
# $ must be the end of the string(prevents incorectly matching the first half)

expr2=re.compile("[a-zA-Z0-9]+@([a-zA-Z0-9]+.)?latech.edu$") #this test for emails
# [a-zA-Z0-9] = The group of alphanumeric characters
# + repeat the group at least once
# @ make sure there is an @ sign in the string
# ([a-zA-Z0-9]+.)? everything in ( ) is optional, it is still valid if missing
# latech.edu make sure the string ends with latech.edu
# $ must be the end of the string(prevents incorectly matching the first half)


infile = sys.stdin # Use this to get keyboard input(or file using <)
outfile = open('./extracted_words.txt','w+') #create an extracted_words.txt file in the current directory if one does not exist and prepare to write to it

line=infile.readline() #read the input from the file(assumes 1 line like the test file)
words=line.split(" ") #Simplest way to get the input separated so that each word can be tested

for word in words: #loop through the list of words
	if expr1.match(word): #if it matches the first expression
		outfile.write(word+"\n") #write the word to the outfile and add a newline
	elif expr2.match(word): #if it matches the second expression
		outfile.write(word+"\n") #write the word to the outfile and add a newline
