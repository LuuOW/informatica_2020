

def control():
    counter = 0
    while counter == 0:
        n=int(input("Enter number:"))
        if n > 0:
            counter += 1
def digits(n):
    count = 0
    while n > 0:
        count += 1
        n = n//10


        
def sum(count, n):
    evenCount = 0
    while n > 0:
        rem = n % 0
        if rem % 2 == 0:
            evenCount += 1
        n = n / 10
    print(evenCount)


control()
digits(n)
sum(count, n)
counter = 0
while counter == 0:
    number = int(input("Enter number: \n"))
    digCount = 0
    while(number>0):
        digCount = digCount + 1
        number = number // 10
    if digCount >= 2:
        counter += 1
print("The number of digits in the number are:",digCount)

def digControl():
    counter = 0
    digCount = 0
    while counter == 0:
        number = int(input("Enter a number: \n"))
        while (number > 0):
            digCount = digCount + 1
            number = number // 10
        if digCount >= 2:
            counter += 1
    return (digCount)

def evenDig(number, digCount):
    evenCount = []
    while (number > 0):
        remaining = number // 2
while number > 0:
    remaining = number // 0
    if remaining // 2 == 0:
        evenCount += 1
        number = number / 10
print(evenCount)









def reverse(n): 
    rev = 0
    while (n != 0): 
        rev = (rev * 10) + (n % 10) 
        n //= 10
    return rev 
  
# Function to find the sum of the odd 
# and even positioned digits in a number
# 


def getSum(): 
    n = 4411
    sumOdd = 0
    sumEven = 0
    c = 1
    
    while (n != 0): 
  
        # If c is even number then it means 
        # digit extracted is at even place 
        if (c % 2 == 0): 
            sumEven += n % 10
        else: 
            sumOdd += n % 10
        n //= 10
        c += 1
  
    print("Sum odd =", sumOdd) 
    print("Sum even =", sumEven) 
  
# Driver code 

getSum() 


def reverse(n): 
    rev = 0
    while (n != 0): 
        rev = (rev * 10) + (n % 10) 
        n //= 10
    return rev 
  
# Function to find the sum of the odd 
# and even positioned digits in a number 
def getSum(n):
    
  
    n = reverse(n) 
    sumOdd = 0
    sumEven = 0
    c = 1
  
    while (n != 0): 
  
        # If c is even number then it means 
        # digit extracted is at even place 
        if (c % 2 == 0): 
            sumEven += n % 10
        else: 
            sumOdd += n % 10
        n //= 10
        c += 1
  
    print("Sum odd =", sumOdd) 
    print("Sum even =", sumEven) 
  
# Driver code 
n = 457892
getSum(n) 



contador = 0

while contador == 0:
    A1 = int(input("Ingrese A1: "))
    A2 = int(input("Ingrese A2: "))
    if A1 < A2:
        contador += 1
    else:
        print("A1 no es menor que A2")
sumaPrima = 0
while sumaPrima <=


upto = int(input("Find sum of prime numbers upto : "))

sum = 0

for num in range(2, upto + 1):

    i = 2
    
    for i in range(2, num):
        if (int(num % i) == 0):
            i = num
            break

    #If the number is prime then add it.
    if i is not num:
        sum += num

print("\nSum of all prime numbers upto", upto, ":", sum)