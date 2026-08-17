collection={12,2,3,2,3,2,1,"hello","world"} #a set is the collection of the differenet value it ignore the identical value it is unorder
# # print(collection)
# items=set()
# items.add(1)
# collection.remove("hello")
# # print(collection)
# # print(items)
# # collection.clear()
# collection.pop()
# print(collection)

# set={1,2,3,4,5,6}
# set2={6,7,8,9,10}
# final=set.union(set2)
# final2=set.intersection(set2)
# print(final2)
data={1,2,5,4,3,6,"sameer ali","shakir"}
data.add(90)
data.add(100)
data.remove("sameer ali")   
data.pop()
data.clear()
data.add("hello word")
data.add(234)
print(data)   

character={'a','b','c','d','e','f'}
number={1,2,3,4,5}
combine=character.union(number)
common=character.intersection(number)
print(common) 