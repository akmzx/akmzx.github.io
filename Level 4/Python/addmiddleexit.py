entry = 0
sum = 0
print("Enter numbers to sum, negative number end the list!")
while True:
    entry = int(input("Enter number: "))
    if entry < 0:
        break
    sum += entry 
print('Sum : ', sum)