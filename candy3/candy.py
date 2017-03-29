#!/usr/bin/python
if __name__ == "__main__":
    """
    algorithm for candy problem of spoj
    """
    testcases = int(raw_input())
    blank=raw_input()
    for t in xrange(testcases):
        children = int(raw_input())
        candies = 0
        for ch in xrange(children):
            candies += int(raw_input())

        if candies % children != 0:
            print "NO"
        else:
            print "YES"

        if t+1 == testcases:
            break
        else:
            blank=raw_input()
