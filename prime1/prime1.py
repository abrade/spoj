#!/usr/bin/python

if __name__ == "__main__":
    testcases = raw_input("")
    for i in range(0, int(testcases)):
        min_max = raw_input("")
        min_max = min_max.split(" ")
        noprimes = [j for i in range(2, 8) for j in range(i*2, int(min_max[1]) + 1, i)]
        primes = [x for x in range(int(min_max[0]), int(min_max[1]) + 1) if x not in noprimes]
        for prime in primes:
            if prime == 1:
                continue
            print prime
        print ""
