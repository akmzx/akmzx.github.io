infile = open('temps.dat', 'r')
temps = {}
for line in infile:
    c,t = line.split(':')
    temps[c] = float(t)

print(temps)
infile.close()

# data = {'A':{}, 'B':{}, 'C':{}, 'D':{} }
