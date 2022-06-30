class Account: 
    def __init__(self, name, account_no, initial_amount): # constructor
        self.__name = name
        self.__no = account_no
        self.__balance = initial_amount
    def deposit(self, amount):
        self.__balance += amount
    def withdraw(self, amount):
        if self.__balance > amount:
            self.__balance -= amount
        else:
            print("Insufficient withdraw money!")
    def dump(self):
        print("%s %s balance: %s " %(self.__name, self.__no, self.__balance))
    def __str__(self):
        return 'Account Holder Name: ' + str(self.__name) + '\nAccount No: ' + str(self.__no) + '\nBalance: ' + str(self.__balance)

a1 = Account("Mg Mg", "0123", 10000) # create an Account object
a1.deposit(5000)
a1.withdraw(200000)
print(a1.__dict__)
print(a1.__name, a1.__no, a1.__balance)
a1.dump()

a2 = Account("Aye Aye", "0124", 12000)
a2.dump()
print(a1)

a1.__name = "Aung Aung"
a1.__no = "1234567"
a1.__balance = 34500
print(a1)