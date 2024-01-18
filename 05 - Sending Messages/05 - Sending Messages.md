# [Sending Messages](https://codeforces.com/problemset/problem/1921/C)

- time limit per test: 2 seconds
- memory limit per test: 256 megabytes
- input: standard input
- output: standard output

## Problem

Stepan is **a** very busy person. Today he needs to send **n** messages at moments **m<sub>1</sub>**,**m<sub>2</sub>**,…**m<sub>n</sub>** (**m<sub>i</sub>**<**m<sub>i+1</sub>**). Unfortunately, by the moment 0, his phone only has **f** units of charge left. At the moment 0, the phone is turned on.

The phone loses **a** units of charge for each unit of time it is on. Also, at any moment, Stepan can turn off the phone and turn it on later. This action consumes **b** units of energy each time. Consider turning on and off to be instantaneous, so you can turn it on at moment **x** and send a message at the same moment, and vice versa, send a message at moment **x** and turn off the phone at the same moment.

If at any point the charge level drops to 0 (becomes ≤0), it is impossible to send a message at that moment.

Since all messages are very important to Stepan, he wants to know if he can send all the messages without the possibility of charging the phone.

## Input

The first line of the input contains a single integer **t** (1≤**t**≤10<sup>4</sup>) — the number of test cases. This is followed by the descriptions of the test cases.

The first line of each test case contains four integers **n**, **f**, **a**, and **b** (1≤**n**≤2⋅10<sup>5</sup>, 1≤**f**,**a**,**b**≤10<sup>9</sup>) — the number of messages, the initial phone's charge, the charge consumption per unit of time, and the consumption when turned off and on sequentially.

The second line of each test case contains **n** integers **m<sub>1</sub>**,**m<sub>2</sub>**,…**m<sub>n</sub>** (1≤ **m<sub>i</sub>** ≤10<sup>9</sup>, **m<sub>i</sub>**<**m<sub>i+1</sub>**) — the moments at which messages need to be sent.

It is guaranteed that in a test the sum of **n** over all test cases does not exceed 2⋅10<sup>5</sup>.

## Output

For each test case, output "YES" if Stepan can send all the messages, and "NO" otherwise.

You can output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be accepted as a positive answer.