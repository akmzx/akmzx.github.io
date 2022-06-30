# read one line of file using readline()

infile = open('data.txt','r')
sum = 0
count = 0
while True:
    line = infile.readline()
    if not line:
        break
    sum += float(line)
    count += 1
print('Sum: ', sum)
print('Avg: ', sum/count)
infile.close()