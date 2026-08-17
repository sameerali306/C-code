info={
    

}
info["name"]="faria hussain"
info["age"]=20
info["subject"]={
    "math":50,
    "physic":45,
    "chemistry":89
}
# print(info["subject"]["math"])
# print(info["subject"]["physic"]) #when we have to from root to the ned values
# print(list(info.keys())) #return only the keys
# print(info.values()) #return only the value
# print(info.items()) #return the keys along with its values
# print(info.get("name"))
# print(info["name"])
# new_dict={"name":"sameer ali","age":22}
# info.update(new_dict)
# print(info)

# dict={}
# print(dict)

# subject={"python","c++","python","java","html","c++","php"}
# print(subject)
# print(len(subject))

# marks={}
# x=int(input("enter marks of physic :"))
# marks.update({"physic":x})
# y=int(input("enter marks of math :"))
# marks.update({"math" :y})
# print(marks)

dictionary={
    "name":"sameer ali",
    "age":22,
    "eduction":"undergraduate",
    "subject":["oops","database","islamiate","dld"]
}
# print(dictionary["subject"])
new_dictionary={"gender":"male"}
dictionary.update(new_dictionary)
print(list(dictionary.keys()))
print(list(dictionary.values()))
print(dictionary.items())
print(dictionary.get("class")) #the .get method never return an error when any value does not exists
