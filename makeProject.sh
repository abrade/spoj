#!/bin/bash

mkdir $1
cp ./templates/* $1

git add .
git commit -m "added spoj project ${1}"
