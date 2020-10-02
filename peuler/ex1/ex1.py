s = 0

for i in range(1000):
    if (i % 3 == 0 or i % 5 == 0):
        s += i

print("The sum of all multiples of 3 or 5 below 1000 is: " + str(s) + ".")
