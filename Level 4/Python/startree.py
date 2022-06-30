height = int(input("Enter height of tree: "))
row = 0

while row < height:
    # space = height - row_no
    count = 0
    while count < height - row:
        print(end = ' ')
        count += 1
    
    # star = 2 * row + 1
    count = 0
    while count < 2 * row + 1:
        print(end = '*')
        count += 1
    print()
    row += 1