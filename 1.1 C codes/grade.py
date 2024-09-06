num_s = input("Enter the number:")
num = int (num_s)
if(num>100):
    print("Error")
elif(num>= 90 and num<=100):
    print("A")
elif(num>= 80 and num<=89):
    print("B")
elif(num>= 70 and num<=79):
    print("C")
elif(num>= 60 and num<=69):
    print("D")
else:
    print("F")