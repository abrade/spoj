#!/usr/bin/python

if __name__ == "__main__":
    for i in range(10):
        apples = int(raw_input())
        klaudiaMore = int(raw_input())

        klaudia = int((apples + klaudiaMore) / 2);
        natalia = int((apples - klaudiaMore) / 2);

        print klaudia
        print natalia
