import math

def isPrime(number):
    for i in range(2, int(math.sqrt(number) + 1)):
        if (number % i == 0):
            return 0
    return 1

count = 0
number = 2
while (count < 10001):
    if (isPrime(number)):
        count += 1
    number += 1

print(str(number - 1) + " is the 10001st prime number.")
