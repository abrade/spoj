#!/usr/bin/python

def fak(faktorial):
    if faktorial == 1:
        return faktorial;
    return faktorial * fak(faktorial - 1)


if __name__ == "__main__":
    testcases = raw_input("")
    for i in range(0, int(testcases)):
        faktorial = raw_input("")
        print fak(int(faktorial))
