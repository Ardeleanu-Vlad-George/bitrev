# Purpose
Develope a program that accepts as CLA a number and prints out the next 'table':
|Number|Number's binary form|Binary's form length in bits|
|:---|:---:|---:|
|Number's reverse|Number's binary form reversed from left to right|Length of reversed binary form|

The main focus is the middle column, the other two show extra information.
# Bonus
A place in which to store the next functions: getBitRev, getBitLen and getStrBitRepr (read comments for what they do).
# MadeWith
- GCC; version 9.4.0
- GNU Make; version 4.2.1
- C; standard ISO C99
# ExampleOfUsage
For the command './bitrev 10', the output is:
```
10    1010    4
 5    0101    3
```
For the command './bitrev 100', the output is:
```
100    1100100    7 
 19    0010011    5 
```
**OBS**: Even if the reversed number needs less bits to be represented, zeros are used to padd up to the initial length. 
