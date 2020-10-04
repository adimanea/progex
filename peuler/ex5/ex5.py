def isDivisible(number):
    for i in range(1, 20):
        if (number % i != 0):
            return 0
    return 1

largest = 167610643200
smallest = 1

while (smallest <= largest):
    if (isDivisible(smallest) == 1):
        print(str(smallest) + " is divisible by all numbers 1..20.")
        break
    else:
        smallest += 1

