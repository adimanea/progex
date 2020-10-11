def collatzLength(n):
    length = 0
    while (n != 1):
        if (n % 2 == 0):
            n = int(n / 2)
            length += 1
        else:
            n = 3 * n + 1
            length += 1
    return length

maxLength = 0
thisOne = 1
for start in range(1000000, 1, -1):
    if (maxLength < collatzLength(start)):
        maxLength = collatzLength(start)
        thisOne = start

print(str(maxLength) + " is the largest Collatz sequence starting at " + str(thisOne))
        
