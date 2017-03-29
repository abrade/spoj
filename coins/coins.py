#!/usr/bin/env python

import sys as _sys

_cache = {0 : 0}

def exchange_coins(n):
    if not n in _cache:
        v = exchange_coins(n//2) + exchange_coins(n//3) + exchange_coins(n//4)
        _cache[n] = max(n, v)
    return _cache[n]

if __name__ == '__main__':
    for line in map(int, _sys.stdin):
        print(exchange_coins(line))
