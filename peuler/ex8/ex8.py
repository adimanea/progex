number = []
i = 0
maxProd = 0
product = 1

fileLines = open('number').readlines()
for line in fileLines:
    for c in line:
        if (c != '\n'):
            number.append(c)

for i in range(0, 1000-13):
    product = 1
    for nr in number[i:i+13]:
        product *= int(nr)
    if (maxProd < product):
        maxProd = product

print(str(maxProd) + " is the largest product of 13-adjacent digits.")
