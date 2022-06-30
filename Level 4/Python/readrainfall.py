def extract_data(filename):
    infile=open(filename,'r')
    infile.readline()
    infile.readline()
    months = []
    values = []
    for line in infile:
        month,value = line.split()
        months.append(month)
        values.append(float(value))
    months = months[:-1]
    annual_avg = values[-1]
    values = values[:-1]
    return months, values, annual_avg

months, values, annual_avg = extract_data('rainfall.dat')
print("Total Data: ")
for month, value in zip(months, values):
    print(month, value)
print("Annual Avg: ", annual_avg)
