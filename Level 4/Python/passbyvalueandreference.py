# pass by reference
temps = {'Yangon':23.45, 'Mandalay':35.23, 'Monywa':38.32}
t1 = temps
t1['Magway'] = 34.56
print(temps)
print(t1)

# pass by value using copy function
t2 = temps.copy()
t2['Moenyin'] = 21.34
print(t2)
print(temps)

# pass by reference in list
L = [15, 24, 37, 54]
M = L[:]
M[1] = 26
print(L)
print(M)