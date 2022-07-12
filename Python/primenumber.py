num=int(input('Enter any number:' ))
if num==1:
    print(num , ' is a prime number')
elif num >1:
    for i in range(2,num) :
        if(num%i)==0:
            print(num, 'is a Prime number')
        else:
            print(num, 'is Not a prime number ')
        