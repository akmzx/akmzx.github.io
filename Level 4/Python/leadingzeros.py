num = int(input("Enter number range from 0....9999: ")) #500
if num < 0:
    num = 0
if num > 9999:
    num = 9999
print(end = "[")

digit = num//1000 #digit = 500//1000 = 0
print(digit,end = "") # 0
num %= 1000 # 500

digit = num//100
print(digit, end = "")
num %= 100

digit = num//10
print(digit,end = "")
num %= 10
print(num,end = "]")