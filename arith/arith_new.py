#!/usr/bin/python

if __name__ == "__main__":
    n = int(raw_input())
    for i in range(n):
        arith = raw_input()
        if "+" in arith:
            sp = map(int, arith.split("+"))
            sumArith = sum(sp)
            s = "%d" % len(str(sumArith))
            print s % sp[0]
            print s % sp[1]
            print sumArith
