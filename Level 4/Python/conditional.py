# if condition
# True for some value => 123, True, 'str'
# False for no value => 0, False, null
var1 = 5
if var1 > 14:
    print("has some value in var1")
    print(var1)
else:   
    print(var1,' is less than 14')

var2 = True
if var2:
    print("has some value in var2")
    print(var2)
print("Good Bye!")

var = 1000
if var < 200:
    print("Var is less than 200")
    if var == 150:
        print("Var is 150")
    elif var == 100:
        print("Var is 100")
    elif var == 50:
        print("Var is 50")
    elif var < 50:
        print("Var is less than 50")
else:
     print("Var is greater than or equal 200")
print("Bye!")

# 1 => 0001
# 12 => 0012
# 123 => 0123
# 2345 => 2345