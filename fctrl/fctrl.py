#!/usr/bin/python

def traillingZeros(num):
    z = 0
    factor = 5
    while num > factor:
        z = z + int((num/factor))
        factor *= 5
    return z

if __name__ == "__main__":
    testcases = raw_input("")
    for i in range(0, int(testcases)):
        faktorial = raw_input("")
        result = traillingZeros(int(faktorial))
        print result
            
