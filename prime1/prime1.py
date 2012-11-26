#!/usr/bin/python

def calcPrime(minVal, maxVal):
    for i in range(minVal, maxVal):
        if i == 1:
            continue

        if i == 2:
            print i
            continue
        elif i == 3:
            print i
            continue
        elif i == 5:
            print i
            continue
        elif i == 7:
            print i
            continue

        if i % 2 == 0:
            continue
        elif i % 3 == 0:
            continue
        elif i % 5 == 0:
            continue
        elif i % 7 == 0:
            continue
        print i


if __name__ == "__main__":
    testcases = raw_input("")
    for i in range(0, int(testcases)):
        min_max = raw_input("")
        min_max = min_max.split(" ")
        calcPrime(int(min_max[0]), int(min_max[1]))
        print ""
