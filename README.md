# Codeforces
Codeforces solutions :D

## CPC - Primeros Pasos
<details>
  <summary>A. Hello, CPC!</summary>
  
  time limit per test1 second
  memory limit per test256 megabytes
Your task is to write a program that prints exactly the phrase Hello, CPC! to the standard output.

Input
This problem has no input.

Output
Print a single line with the phrase Hello, CPC!.

Example
Input
 
Output
Hello, CPC!
</details>

<details>
  <summary>B. Basic Operations</summary>
  
  time limit per test1 second
memory limit per test256 megabytes
Consider two integers a
 and b
. Your task is to compute and print the results of seven different arithmetic operations between them in a specific order.

For example, if a=10
 and b=4
, the operations would yield:

Sum: 10+4=14
Subtraction: 10−4=6
Floor division∗
: ⌊104⌋=2
Modulo (remainder)†
: 10mod4=2
Multiplication: 10×4=40
Floating-point division (with exactly 6
 digits after the decimal point): 10/4=2.500000
Ceiling division‡
: ⌈104⌉=3
∗
The floor function gives the greatest integer less than or equal to its argument (e.g., ⌊3.14⌋=3
, ⌊−3.2⌋=−4
).

†
nmodm
 (for integer n
 and m
) is defined as n−⌊nm⌋⋅m
.

‡
The ceiling function gives the least integer greater than or equal to its argument (e.g., ⌈3.14⌉=4
, ⌈−3.2⌉=−3
).

Input
The only input line contains two integers a
 and b
 (|a|,|b|≤2⋅109
, b≠0
), separated by a space.

Output
Print exactly seven lines, each containing the result of one operation in the specified order.

Scoring
Subtask 1
 (30
 points): 1≤a,b≤2⋅104
Subtask 2
 (30
 points): |a|,|b|≤2⋅104
, b≠0
Subtask 3
 (40
 points): No additional constraints.
For each subtask, points will be awarded based on the correctness of the following operations:

Sum correct: 10%
 of the subtask's points.
Subtraction correct: 10%
 of the subtask's points.
Floor division correct: 10%
 of the subtask's points.
Modulo (remainder) correct: 15%
 of the subtask's points.
Multiplication correct: 10%
 of the subtask's points.
Floating-point division correct: 20%
 of the subtask's points.
Ceiling division correct: 25%
 of the subtask's points.
Examples
Input
10 4
Output
14
6
2
2
40
2.500000
3
Input
10 -4
Output
6
14
-3
-2
-40
-2.500000
-2
</details>
