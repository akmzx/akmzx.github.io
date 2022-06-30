# p(x) = -1 + x^2 + 3 X^7
p = {0:-1, 2:1, 7:3}
def eval_poly_dict(poly, x):
    sum = 0.0
    for power in poly:
        sum += poly[power] * x ** power
    return sum 

print(eval_poly_dict(p,2))