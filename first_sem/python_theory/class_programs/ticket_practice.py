print("--------ticket pricing system---------")
ticket_price=500
age=int(input("enter your age="))
week=input("enter the day=")
show=input("enter the show timing[morning,afternoon,evening]=")
if week=="monday":
    ticket_price
elif week=="tuesday":
    ticket_price
elif week=="wednesday":
    ticket_price
elif week=="thursday":
    ticket_price
elif week=="friday":
    ticket_price
elif week=="saturday":
    ticket_price=ticket_price*25//100+ticket_price
elif week=="sunday":
    ticket_price=ticket_price*25//100+ticket_price 
if show=="morning":
    ticket_price
if show=="afternoon":
    ticket_price=ticket_price*10//100+ticket_price
if show=="evening":
    ticket_price=ticket_price*30//100+ticket_price
if age>5 and age<=59:
    print("adult ticket alloted=Rs.",ticket_price)
elif age<=5:
    print("child ticket alloted=Rs.",ticket_price*50//100)
else:
    print("senior citizen ticket alloted=Rs.",ticket_price*90//100)
