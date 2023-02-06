l=[]
sum=0
n=int(input("Enter number of items: "))
for i in range (0,n):
    a=int(input("Enter a number: "))
    l.append(a)
    sum+=l[i]
print("Sum = ", sum)