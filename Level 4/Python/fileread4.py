# read all line in files as one paragraph read()

infile = open('data.txt','r')
text = infile.read()
print(text)
lines = text.split() # split string using space between them
print(lines)

infile.close()