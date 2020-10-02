i = 0
s = 2

fib1 = 1
fib2 = 2
newFib = fib1 + fib2
while (newFib <= 4000000):
    if (newFib % 2 == 0):
        s += newFib
    fib1 = fib2
    fib2 = newFib
    newFib = fib1 + fib2
    i += 1

print("The sum of all even-valued Fibonacci numbers below 4 million is " + str(s))
print("This is up to index " + str(i))
