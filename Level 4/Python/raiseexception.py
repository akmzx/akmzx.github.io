import sys
def read_C():
    try:
        C = float(sys.argv[1])
    except IndexError:
        raise IndexError("You failed to provide C value!")
    except ValueError:
        raise ValueError("Your value is invalid!")
    if C<-273.25:
        raise ValueError("Your value is less than minimum")
    return C
try:
    C = read_C()
except(IndexError, ValueError) as e:
    print(e)
    sys.exit(1)
F = 9.0 * C/ 5 + 32
print(C, 'C =', F, 'F')