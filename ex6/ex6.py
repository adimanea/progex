def sumSq(start, fin):
    sum = 0
    for i in range(start, fin + 1):
        sum += i * i
    return sum

def sqSum(start, fin):
    sum = 0
    for i in range(start, fin + 1):
        sum += i
    return (sum * sum)

print(str(sqSum(1,100) - sumSq(1,100)) + " is the difference between sumSq(1..100) and sqSum(1..100).")
