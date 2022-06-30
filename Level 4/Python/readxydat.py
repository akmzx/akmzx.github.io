pairs = []
infile = open('xy.dat','r')
for line in infile:
    words = line.split()
    # print(words)
    for word in words:
        word = word[1:-1] # remove ( )
        x,y = word.split(',')
        pair = (float(x),float(y)) # prepare x,y data into tuple
        pairs.append(pair)
print(pairs)
infile.close()