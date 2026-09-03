items=(1,"sameer ali","flower",3.14,True,False)
# print(items) 
# print(type(items))
# print(items[0]) #find the element at the inndex 0
# print(items[-1])#find the elemet at the last index
# print(items[0:3])#find the element from index 0 to 2
# print(items[0:])#find the element from index 0 to last index
# print(items[:-1])#find the element from index 0 to last index
# print(items[::2])#find the element from index 0 to last index with step 2
# print(items.count(1))#find the count of the element in the tuple

#unpacking the  tuple items
w,x,y,z=items[:4]
print(x,y,z)
# items.append("new item") #A tuple is immutable so we cannot add or remove the items from the tuple
print(items)
print(sorted(items)) #it will give error because we cannot sort the tuple because it is immutable