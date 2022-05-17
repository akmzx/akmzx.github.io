count = sum = 0
while count < 5:
    val = int(input("Enter number: "))
    if val < 0:
        print("Negative number unacceptable, terminating ----!")
        break
    count += 1
    sum += val
else:
    print("Average: ", sum/count)