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