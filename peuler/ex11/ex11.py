product = 1
maxProdLine = 0
maxProdDiag = 0
factorsLine = [0 for i in range(0,4)]
factorsDiag = [0 for i in range(0,4)]
maxLine = 0
maxDiag = 0

numsList = []
numsMat = [[0 for i in range(0,20) ] for j in range(0,20)]

fileLines = open("grid", "r").readlines()
for line in fileLines:
    for elt in line.split():
        numsList.append(int(elt))

k = 0
for i in range(0,20):
    for j in range(0,20):
        numsMat[i][j] = numsList[k]
        k += 1

# compute the maximum product on a line
for i in range(0,20):
    for j in range(0,20):
        product = 1
        if (j < 16):
            product *= numsMat[i][j] * numsMat[i][j+1] * numsMat[i][j+2] * numsMat[i][j+3]
            if (maxProdLine < product):
                maxProdLine = product
                factorsLine[0] = numsMat[i][j]
                factorsLine[1] = numsMat[i][j+1]
                factorsLine[2] = numsMat[i][j+2]
                factorsLine[3] = numsMat[i][j+3]
                maxLine = i

# compute the maximum product on a diagonal
for i in range(0, 20):
    for j in range(0, 20):
        product = 1
        if (i + j < 17):
            product *= numsMat[i][j] * numsMat[i+1][j+1] * numsMat[i+2][j+2] * numsMat[i+3][j+3]
            if (maxProdDiag < product):
                maxProdDiag = product
                factorsDiag[0] = numsMat[i][j]
                factorsDiag[1] = numsMat[i+1][j+1]
                factorsDiag[2] = numsMat[i+2][j+2]
                factorsDiag[3] = numsMat[i+3][j+3]
                maxDiag = i

# print which one is bigger
if (maxProdDiag >= maxProdLine):
    print(str(maxProdDiag) + " is the biggest product, obtained on a diagonal.")
    print("It is obtained from line " + str(maxLine))
    print("Namely, from " + str(factorsLine[0]) + ", " + str(factorsLine[1]) + ", " +
          str(factorsLine[2]) + ", " + str(factorsLine[3]))

else:
    print(str(maxProdLine) + " is the biggest product, obtained on a line.")
    print("It is obtained starting from line " + str(maxDiag));
    print("Namely, from elements: " + str(factorsDiag[0]) + ", " + str(factorsDiag[1]) +
           ", " + str(factorsDiag[2]) + ", " + str(factorsDiag[3]))
    
