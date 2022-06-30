temps = {'Oslon':13, 'London':14.5, 'Paris':17.5}
print(type(temps))

for city in temps:
    print(city, ': ',temps[city])

print(list(temps.keys()))
print(list(temps.values()))

temps['Yangon'] = 23.56
temps['Tokyo'] = 2.67
temps['Oslo'] = 15.89

for city in sorted(temps):
    print("The %s has %.2f degrees" %(city,temps[city]))

if "Tokyo" in temps:
    print('Tokyo', temps['Tokyo'])
else: 
    print("There is no info about Tokyo")