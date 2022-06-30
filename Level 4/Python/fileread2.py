# read file using readlines
infile = open('data.txt','r')
lines = infile.readlines() # read all lines in infile and save as list
sum = 0
for line in lines:
    sum += float(line)

print("Sum: ",sum)
print("Avg: ", sum/len(lines))
infile.close()