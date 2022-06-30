def yfunc(t):
    g = 9.81
    global v0
    v0 = 5
    print('Local v0', v0)
    return v0 * t - 0.5 * g * t ** 2
v0 = 10
t = 0.6
print('Global v0', v0)
print(yfunc(t))
print('Global v0', v0)