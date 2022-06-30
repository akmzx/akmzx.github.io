i = 2
while i < 100000:
    j = 2
    while j <= (i/j):
        if not(i%j): break # break if i%j == 0
        j += 1
    if j > (i/j): print(i, ' is prime')
    i += 1
print('Bye!')