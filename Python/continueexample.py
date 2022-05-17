sum = 0
done = False
while not done: 
    val = int(input("Enter positive number to sum, 999 to exit!"))
    if val < 0:
        print("Negative number", val, "not Tallying!")
        continue
    if val != 999:
        print("Tallying!")
        sum += val
    else:
        done = (val == 999)
print("Sum: ", sum)