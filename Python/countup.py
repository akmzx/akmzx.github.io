count = 0
entry = 'Y'

while entry != 'N' and entry != 'n':
    print(count)
    entry = input("Enter 'Y' to continue and 'N' to quit: ")
    if entry =='Y' or entry == 'y':
        count += 1
    elif entry != 'N' and entry != 'n':
        print('Choice', entry, 'is not a valid choice!')