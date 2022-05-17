list=['abc',123,"Mg Mg",23,45]
print(type(list))
print(list[-1])
print(list[2:5])
print(list[:4])
print(list*2)
list[0]='def'
print(list)

for item in list:
    print(item, end=" ")