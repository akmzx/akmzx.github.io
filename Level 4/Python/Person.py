class Person:
    def __init__(self, name, mobile_phone = None, office_phone = None, private_phone = None, email = None):
        self.name = name
        self.mobile = mobile_phone
        self.office = office_phone
        self.private = private_phone
        self.email = email
    def add_mobile_phone(self, mobile):
        self.mobile = mobile
    def add_private_phone(self, private):
        self.private = private
    def add_office_phone(self, office):
        self.office = office
    def add_email(self, email):
        self.email = email
    def dump(self):
        s = "Name: " + self.name
        if self.mobile is not None:
            s += "\nMobile: " + self.mobile
        if self.private is not None:
            s += "\nPrivate: " + self.private
        if self.office is not None:
            s += "\nOffice: " + self.office
        if self.email is not None:
            s += "\nEmail: " + self.email
        print(s)

p1 = Person("Ko Aung Gyi", email = "aunggyi@gmail.com") # initialize object
# p1.add_mobile_phone("0934534543")
# p1.add_office_phone("0934534543")
p1.add_private_phone("0934534543")
print(p1.__dict__)
p1.dump()