dict={'name':'Mg Mg'}
print(type(dict))
print(dict['name'])
dict['age']=21
dict['city']='Yangon'
print(dict)
print(dict.keys())
print(dict.values())
print(list(dict.keys()))
for key in dict:
    print (key,dict[key])