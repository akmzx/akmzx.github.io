# input dynamic function to evaluate
formula = input("Please enter x formula: ")
code = """
def f(x):
    return %s
""" %(formula)
exec(code)

x = 0
while x is not None:
    x = eval(input('Enter x to calculate and None to quit! : '))
    if x is not None:
        y = f(x)
        print("f(%g) = %g"%(x, y))