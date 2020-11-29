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
    print(number)
    evenCount = []
    remaining = number // 2
    if remaining == 0:
        