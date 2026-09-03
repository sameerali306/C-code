# collection={12,2,3,2,3,2,1,"hello","world"} #a set is the collection of the differenet value it ignore the identical value it is unorder
# # # print(collection)
# # items=set()
# # items.add(1)
# # collection.remove("hello")
# # # print(collection)
# # # print(items)
# # # collection.clear()
# # collection.pop()
# # print(collection)

# # set={1,2,3,4,5,6}
# # set2={6,7,8,9,10}
# # final=set.union(set2)
# # final2=set.intersection(set2)
# # print(final2)
# # data={1,2,5,4,3,6,"sameer ali","shakir"}
# # data.add(90)
# # data.add(100)
# # data.remove("sameer ali")   
# # data.pop()
# # data.clear()
# # data.add("hello word")
# # data.add(234)
# # print(data)   

# # character={'a','b','c','d','e','f'}
# # number={1,2,3,4,5}
# # combine=character.union(number)
# # common=character.intersection(number)
# # print(common) 

# sets={1,2,3,4,5,6,7,8,9}
# sets.add(10)
# # sets.remove(32) #it will give error becaue 32 is not present in the set
# sets.discard(32) #it will not give error if the value is not present in the set
# sets.pop() #it will remove the first value of the set
# sets.clear() #it will clear the whole set
# # print(sets)

# # validation in the sets
# if 2 in sets:
#     # print("the value is present in the set")
#     pass
# else:
#     # print("the value is not present in the set")    
#     pass



# a={1,2,3}
# b={1,2,3,4,5,6}
# c={6,7,4,5,8,9}

# if a.issubset(b):
#     print("a is subset of b")
# elif b.issubset(c):
#     print("b is subset of a")

# required_field={"Username","password","email"}
# coming_field={
#     "Username":"sameer ali",
#     "password":"123456",
# }  

# missing_field=required_field-set(coming_field.keys())
# if missing_field:
#     print("the missing field is",missing_field)
# else:
#     print("all the required field is present")    


job_post={"web developer","python developer","java developer","react developer"}
application={"python developer","java developer","react developer"}

# if application in job_post:
#     print("the application is valid")
# else:
#     print("the application is not valid")    

a={1,2,3,4,5}
b={1,2,3,4,5,6,7,8,9}

if a.issubset(b):
    print("a is subset of b")
else:
    print("a is not subset of b")    

if b.issuperset(a):
    print("b is superset of a")
else:
    print("b is not superset of a")    

if a.isdisjoint(b):
    print("a and b are disjoint")
else:
    print("a and b are not disjoint")

print(len(a))
            