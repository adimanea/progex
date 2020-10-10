import math

def nthTriang(n):
    s = 0
    for i in range(1, n+1):
        s += i
    return s

def countDivs(n):
    count = 2
    for i in range(2, int(math.sqrt(n)) + 1):
        if (n % i == 0):
            count += 1
    return count


nth = 100
numberOfDivs = countDivs(nthTriang(nth))

while (numberOfDivs <= 500):
    numberOfDivs = countDivs(nthTriang(nth))
    nth += 1

print(str(nthTriang(nth-1)) + " is the " + str(nth - 1) + " triangular number with over 500 divs.")
