print("----------household electricity bill--------")
unit=int(input("enter the unit="))
category=input("enter the category[commercial,non commercial]=")
threshold=input("Is peak threshold found[true/false]")
due_date=(input("Pay bill before[yes/no]"))
if category=="commercial":
   if unit<=100:
    rate=unit*10
    print("Bill=",rate)
   elif unit>=100 and unit<=300:
    rate=(100*10)+((unit-100)*12)
    print("Bill=",rate)
   else:
    rate=(100*10)+(100*12)+((unit-200)*15)
    print("Bill=",rate)
   if threshold=="true":
      penalty=100
      rate=rate+penalty
      print("penalty added Bill=",rate)
   else:
      print("no penalty")
   if due_date=="yes":
       discount=rate*90//100
       print("discounted bill for paying before due date=",discount)
   else:
        print("thank you") 
if category=="non commercial":
   if unit<=100:
    rate=unit*5
    print("Bill=",rate)
   elif unit>100 and unit<=300:
    rate=(100*5)+((unit-100)*6)
    print("Bill=",rate)
   else:
    rate=(100*5)+(100*6)+((unit-200)*8)
    print("Bill=",rate)
    if threshold=="true":
          penalty=50
          rate=rate+penalty
          print("penaly addeBill=",rate)
    else:
          print("no penalty")
          print("Bill=",rate)
   if due_date=="yes":
    discount=rate*90//100    
    print("discounted bill for paying before due date=",discount)
   else:
    print("thank you") 