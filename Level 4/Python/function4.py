def multiple():
    values = dict() 
    values['operation'] = "sum"
    values['total'] = 10 + 5
    return values
    # operation = 'sum'
    # total = 10 + 5
    # return operation, total # tuple
    # return [operation, total] # list

values = multiple() # list
print(values) # list

# operation,total = multiple() # tuple
# print(operation, total) # tuple