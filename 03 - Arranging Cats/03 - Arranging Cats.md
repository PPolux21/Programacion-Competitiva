# [Arranging Cats](https://codeforces.com/problemset/problem/1921/B)

- time limit per test: 2 seconds
- memory limit per test: 512 megabytes
- input: standard input
- output: standard output

## Problem

In order to test the hypothesis about the cats, the scientists must arrange the cats in the boxes in a specific way. Of course, they would like to test the hypothesis and publish a sensational article as quickly as possible, because they are too engrossed in the next hypothesis about the phone's battery charge.

Scientists have n boxes in which cats may or may not sit. Let the current state of the boxes be denoted by the sequence **b<sub>1</sub>**, … ,**b<sub>n</sub>** : **b<sub>i</sub>**=1 if there is a cat in box number i, and **b<sub>i</sub>**=0 otherwise.

Fortunately, the unlimited production of cats has already been established, so in one day, the scientists can perform one of the following operations:

- Take a new cat and place it in a box (for some i such that **b<sub>i</sub>**=0, assign **b<sub>i</sub>**=1).
- Remove a cat from a box and send it into retirement (for some i such that **b<sub>i</sub>**=1, assign **b<sub>i</sub>**=0).
- Move a cat from one box to another (for some i,j such that **b<sub>i</sub>**=1,**b<sub>j</sub>**=0, assign **b<sub>i</sub>**=0,**b<sub>j</sub>**=1).

It has also been found that some boxes were immediately filled with cats. Therefore, the scientists know the initial position of the cats in the boxes **s<sub>1</sub>**, … ,**s<sub>n</sub>** and the desired position **f<sub>1</sub>**, … ,**f<sub>n</sub>**.

Due to the large amount of paperwork, the scientists do not have time to solve this problem. Help them for the sake of science and indicate the minimum number of days required to test the hypothesis.

## Input

Each test consists of several test cases. The first line contains a single integer **t** (1≤**t**≤10<sup>4</sup>) — the number of test cases. This is followed by descriptions of the test cases.

Each test case consists of three lines.

The first line of each test case contains a single integer **n** (1≤**n**≤10<sup>5</sup>) — the number of boxes.

The second line of each test case contains a string **s** of **n** characters, where the i-th character is '1' if there is a cat in the i-th box and '0' otherwise.

The third line of each test case contains a string **f** of **n** characters, where the i-th character is '1' if there should be a cat in the i-th box and '0' otherwise.

It is guaranteed that in a test the sum of n over all test cases does not exceed 10<sup>5</sup>.

## Output

For each test case, output a single integer on a separate line — the minimum number of operations required to obtain the desired position from the initial position. It can be shown that a solution always exists.
