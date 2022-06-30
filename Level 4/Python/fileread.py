# read file using for loop
infile = open('data.txt', 'r')
sum = 0
count = 0
for line in infile:
    sum += float(line)
    count += 1

print('Sum: ', sum)
print('Avg:', sum/count)
infile.close()