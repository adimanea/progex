import math

def isPrime(number):
    for i in range(2, int(math.sqrt(number)) + 1):
        if (number % i == 0):
            return 0
    return 1

n = 2000000
s = 0

while (n > 1):
    if (isPrime(n)):
        s += n
    n -= 1

print(str(s) + " is the sum of all primes below 2 mil.")
