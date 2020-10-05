def isPyth(a, b, c):
    return ((a*a + b*b == c*c) or
            (a*a + c*c == b*b) or
            (b*b + c*c == a*a))

for x in range(1, 1000):
    for y in range(1, 1000):
        for z in range(1, 1000):
            if (isPyth(x,y,z) and (x + y + z == 1000)):
                print(str(x*y*z) + " is the product of the Pythagorean triple with sum 1000.")
                print("This is made of: (" + str(x) + ", " + str(y) + ", " + str(z) + ").")
                quit()
