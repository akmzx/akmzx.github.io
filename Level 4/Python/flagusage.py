done = False # flag
while not done: 
    entry = int(input())
    if entry == 999:
        done = True # change value to exit from loop
    else:
        print(entry)