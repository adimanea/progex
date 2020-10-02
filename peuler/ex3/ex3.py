import math

num = 600851475143

def isprime(x):
    for i in range(2, math.ceil(math.sqrt(x))):
        if (x % i == 0):
            return 0
    return 1

def divisors(x):
    divs = []
    for i in range(2, math.ceil(math.sqrt(x))):
        if (x % i == 0):
            divs.append(i)
    return divs

# for some reason, the solution that checks (isprime(i))
# and (num % i == 0) fails (hangs)

for i in sorted(divisors(num), reverse=True):
    if (isprime(i)):
        print("The largest prime divisor of " + str(num) + " is " + str(i))
        break

