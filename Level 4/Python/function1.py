def F(C):
    return (9.0 / 5) * C + 32

a = 10
F1 = F(a)
print(a,'C =', F1, 'F')
temp = F(15)
C_list = [10, 15, 20, 25, 45]
F_list = [F(C) for C in C_list]
print(C_list, F_list)