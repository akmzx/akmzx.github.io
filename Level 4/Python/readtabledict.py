infile = open('table.dat', 'r')
data = {}
line = infile.readline()
properties = line.split()
for p in properties:
    data[p] = {}

while True:
    line = infile.readline()
    if line:
        words = line.split()
        i = int(words[0])
        values = words[1:]
        for p,v in zip(properties, values):
            if v != 'no':
                data[p][i] = float(v) # 
    else:
        break

for p in data:
    values = data[p].values()
    data[p]['mean'] = sum(values)/len(values)

for p in data:
    print("Mean value of %s is %.2f " %(p, data[p]['mean']))

# print(data)
infile.close()