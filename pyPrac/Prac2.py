for i in range(100):
  print(i)

print(range(10))

array = [1, 3, 5, 7, 9]
for el in array:
  print(el)


dictionary = {
  "name" : "7D Dry Mango",
  "type" : "Sweet Pickle",
  "ingredient" : ["Mango", "Sultang", "MetazungahwangsanSo", "chizahwansackso"],
  "origin" : "Plipin"
}

key = input("What you access the key? >> ")
if key in dictionary:
  print(dictionary[key])
else:
  print("Unvaild Key Value")

value = dictionary.get("N/A")
print("Value", value)

if value == None:
  print("Unvaild Key Value")


for key in dictionary:
  print(key, ":", dictionary[key])
