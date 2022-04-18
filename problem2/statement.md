## Problem Statement

Bo is a great fan of number theory and he designing a phone lock with a mathematical combination.
Here's how he structured it:

The phone's keypad has an additonal Add button apart from the 11 buttons from 0 to 9.
On click of any button from 0-9, the corresponding digit appears on the display. On click of the special Add button, the last two digits appearing on the screen gets replaced by their sum modulo 10. If there are less than two digits currently on the screen, pressing Add does nothing.

Bo has assigned a non-negative cost to pressing each button. The cost of pressing Add button is always zero. Now given the cost of pressing each button and the target passcode, your task is to find the minimum cost of feeding that number into the phone screen using any sequence of button press.


Each button has a non-negative cost of pressing associated with it. The cost of pressing Add button is always 0. Given the cost of pressing each button and the target phone number, find the minimum cost of feeding that number into the phone screen using a sequence of button presses.

##INPUT
first line is an integer T - number of test cases
Each test case is given by 3 lines.
first line of each test case contains 10 space separated integers, denoting the cost of pressing buttons from 0 to 9.
the second line of each test contains the length of the target passcode.
The third line contains the target passcode itself.

##OUTPUT

Print the minimum cost of feeding the phone screen with the target number for each test case in a separate line.

##CONSTRAINTS

1 ≤ T ≤ 1000
0 ≤ Cost of any button ≤ 1000
1 ≤ |S|≤ 1000


|        Sample Input | Sample Output |
|--------------------:|---------------|
| 3                   | 6             |
| 3 2 2 3 2 1 1 2 3 3 | 3             |
| 3                   | 4             |
| 171                 |               |
| 3 2 3 1 1 1 1 3 1 2 |               |
| 2                   |               |
| 16                  |               |
| 3 3 3 1 3 1 1 2 3 2 |               |
| 2                   |               |
| 43                  |               |


##Explanation

For Test Case 1: Button sequence with cost in brackets: Press 6 (1) -> Press 5 (1) -> Press "Add" (0) -> Press 7 (2) -> Press 6 (1) -> Press 5 (1)-> Press "Add" (0).

Total Cost = 1 + 1 + 0 + 2 + 1 + 1 + 0 = 6.