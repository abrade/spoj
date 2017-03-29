#!/usr/bin/python
if __name__ == "__main__":
    """
    algorithm for candy problem of spoj
    """
    while True:
        candies = int(raw_input())
        if candies is -1:
            break

        candy = []
        total = 0

        for i in xrange(candies):
            c = int(raw_input())
            total += c
            candy.append(c)

        if total % candies != 0:
            print "-1"
            continue

        maxCandies = total / candies
        iterations = sum(n - maxCandies for n in candy if n > maxCandies)
        print iterations
