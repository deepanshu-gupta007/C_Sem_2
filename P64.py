n=int(input("Enter a number: "))
x=n
sum=0
while x>0:
    r=x%10
    sum=(sum*10)+r
    x=x//10
if n==sum:
    print(n, " is a palindrome number.")
else: print(n, " is not a palindroem number.")