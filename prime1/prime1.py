#!/usr/bin/env python
def gen_primes():
    """ Generate an infinite sequence of prime numbers.
    """
    D = {}
    q = 2
    while True:
        if q not in D:
            yield q
            D[q * q] = [q]
        else:
            for p in D[q]:
                D.setdefault(p + q, []).append(p)
            del D[q]
        q += 1

if __name__ == "__main__":
    testcases = raw_input("")
    for i in range(1, int(testcases) + 1):
        min_max = raw_input("")
        min_max = min_max.split(" ")
        min_max[0] = int(min_max[0])
        min_max[1] = int(min_max[1])

        for prime in gen_primes():
            if prime > min_max[1]:
                break
            if prime < min_max[0]:
                continue
            print prime
        print ""


        # noprimes = [j for i in range(2, 8) for j in range(i*2, int(min_max[1]) + 1, i)]
        # primes = [x for x in range(int(min_max[0]), int(min_max[1]) + 1) if x not in noprimes]
        # for prime in primes:
        #     if prime == 1:
        #         continue
        #     print prime
        # print ""
