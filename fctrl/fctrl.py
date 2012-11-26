#!/usr/bin/python

def traillingZeros(num):
    z = 0
    factor = 5
    while num > factor:
        z = z + int((num/factor))
        factor *= 5
    return z

if __name__ == "__main__":
    testcases = int(raw_input(""))
    for i in range(0, testcases):
        faktorial = int(raw_input(""))
        print traillingZeros(faktorial)
