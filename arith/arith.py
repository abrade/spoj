#!/usr/bin/python

import sys

def max(first, second):
    if(first > second):
        return first
    else:
        return second

def printSpaces(count):
    for i in range(0, count):
        sys.stdout.write(" ")

def printValue(value, maxLen):
    spaces = maxLen - len(value)
    printSpaces(spaces)
    print value

def printMul(operand1, operand2, maxLen):
    for s in reversed(operand2):
        result = int(operand1) * int(s)
        printValue(str(result), maxLen)
        maxLen -= 1

def calculate(arith):
    idx = getIndexOfOperator(arith)
    operand1 = str(int(arith[0:idx]))
    operator = arith[idx:idx+1]
    operand2 = str(int(arith[idx+1:]))
    op = getOperator(operator)
    op1len = len(operand1)
    op2len = len(operand2) + 1
    result = op(int(operand1), int(operand2))
    opMaxLen = max(op1len, op2len)
    maxLen = max(opMaxLen, len(str(result)))
    printValue(operand1, maxLen)
    printValue(operator + operand2, maxLen)
    if operator == '*' and op2len > 1:
        line = ""
        for i in range(0, opMaxLen):
            line += "-"
        if op2len > 2:
            printValue(line, maxLen)
            printMul(operand1, operand2, maxLen)

    line = ""
    lastLineLen = maxLen
    if operator == '*':
        lastLineLen = len(str(result))
        if op2len <= 2:
            lastLineLen = maxLen
        elif lastLineLen < op2len:
            lastLineLen = op2len - 1

    for i in range(0, lastLineLen):
        line += "-"
    printValue(line, maxLen)
    printValue(str(result), maxLen)
    print ""


def getOperator(operator):
    return {
        '+': lambda x,y: x+y,
        '-': lambda x,y: x-y,
        '*': lambda x,y: x*y
        }.get(operator)

def getIndexOfOperator(arith):
    idx = 0
    idx = arith.find("+")
    if idx != -1:
        return idx

    idx = arith.find("*")
    if idx != -1:
        return idx

    idx = arith.find("-")
    if idx != -1:
        return idx

    return -1

if __name__ == "__main__":
    testcases = int(raw_input(""))
    for i in range(0, testcases):
        arith = raw_input("")
        calculate(arith)
