#(1) accept input
val = input("Enter F degree: ")

try:
    degreeF = float(val)
    degreeC = 5 / 9 * (degreeF - 32)

#(3) output result
    print(degreeF, ' degrees F = ', degreeC, ' degrees C')
except:
    print("Error on input value!")
#(2) process => C = 5 / 9 (F - 32)
