# get prime from 10 to 19
for num in range(10, 2000000000):
    for i in range(2, num):
        if num&i == 0:
            j = num/i
            print("%d = %d * %d" %(num, i, j))
            break
        else:
            print(num, 'is prime')