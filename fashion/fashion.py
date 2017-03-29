#!/usr/bin/python

if __name__ == "__main__":
    testcases = raw_input()
    for i in range(1, int(testcases) + 1):
        n = int(raw_input())
        men = sorted(map(int,raw_input().split()))[::-1]
        women = sorted(map(int,raw_input().split()))[::-1]
        result = 0
        for j in range(0, n):
            result += (int(men[j]) * int(women[j]))
        print result
