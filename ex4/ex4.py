def checkPal(number):
    rev = 0
    numberCopy = number

    while (number != 0):
        rev = rev * 10 + number % 10
        number = number // 10

    if (numberCopy == rev):
        return 1
    else:
        return 0

maxPal = 0
for factor1 in range(999, 100, -1):
    for factor2 in range(999, 100, -1):
        if (checkPal(factor1 * factor2)):
            if (factor1 * factor2 > maxPal):
                maxPal = factor1 * factor2

print(str(maxPal) + " is the largest 2-factor 3-digit palindrome.")
