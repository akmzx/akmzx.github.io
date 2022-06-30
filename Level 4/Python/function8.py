def factorial(n):
    product = 1
    while n:
        product *= n
        n -= 1
    return product

def main():
    print('5! =', factorial(5))
    print('7! =', factorial(7))

main()