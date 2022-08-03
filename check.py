x = input("Type a number: ")
y = input("Type another number: ")

# simple calculator

print("The sum is: ", int(x) + int(y))
print("Subtraction is :", int(x) - int(y))
print("Multiplication is :", int(x) * int(y))
print("Divison is :", float(x) / float(y))

# odd even check

n = input("Enter the number :")
if int(n) % 2 == 0:
    print("Your number is even.")
else:
    print("Your number is odd.")

#large Number find

a = input("Enter the first number ")
b = input("Enter the second number ")
c = input("Enter the third number ")

if int(a)>int(b) and int(a)>int(c) :
    print(a, " is largest number.")
elif int(b)>int(c) :
    print(b, " is largest number.")
else :
    print(c, " is largest number.")