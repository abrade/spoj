#!/usr/bin/python

if __name__ == "__main__":
    testcases = raw_input()
    for i in range(1, int(testcases) + 1):
        exp = raw_input()
        open_brace = 0
        close_brace = 0
        sings = []
        operators = []
        for s in exp:
            if s == '(':
                open_brace += 1
            elif s == ')':
                close_brace += 1
                sings.append(operators[-1])
                del operators[-1]
            elif s.isalpha():
                sings.append(s)
            else:
                operators.append(s)
        print "".join(sings)
