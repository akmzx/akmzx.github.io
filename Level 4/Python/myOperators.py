a = int(input("Enter First Number: "))
b = int(input("Enter Second Number: "))
c = a + b
d = a - b
e = a / b
f = a % b
g = a * b
h = a ** b 
i = a // b
print (c, d, e, f, g, h, i)

# Comparison Operators => == != < > 
result1 = a != b
print (result1)
if result1: 
    print('Not Equal')

# assignment operators += / -= / *=
a += b
b *= a
print(a, b)

a += 1
b += 1
print(a, b)

# bitwise operators & | ^ ~ << >>
a = 60 
b = 13
c = a & b 
d = a | b
e = a ^ b 
f = ~a 
g = a << 2 
h = a >> 2
print (c, d, e, f, g, h)