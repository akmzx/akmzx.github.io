# 60 => 1min => 3600 s => 1 hour
# 3600 => 1 hr : 0 min : 0 sec
# 3610 => 1 hr : 0 min : 10 sec
# 3670 => 1 hr : 1 min : 10 sec
# 3670 // 3600 = hr
#   sec // 3600 = hr
#   sec %= 3600
#   sec // 60 = min
#   sec %= 60 
seconds = int(input("Enter Seconds : "))
hours = seconds // 3600
seconds %= 3600
minutes = seconds // 60
seconds %= 60
print(hours, ' hr: ', minutes, ' min: ', seconds, ' sec ')