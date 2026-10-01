list=[]
total=0
i=int(input("enter the size of list"))
for number in range(i):
    newlist=int(input("enter the elements:"))
    list.append(newlist)
    total=total+list[number]
print(list)    
print("the sum is",total)
