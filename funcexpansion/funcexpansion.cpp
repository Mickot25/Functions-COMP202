/*
The expansion of a steel bridge as it is heated to a final Celsius temperature, Tf
frmo an initial temperature, To, can be approximated by using this formula:

Increase in length, iL = a * L * (Tf - To)
a - coefficient of expansion of steel which is 11.7 x 10^-6.
L - length of the bridge at temperature, To

Using this formula, write a C++ program that displays a table of expanion for steel bridge
that is L meters longs at an initial temperature, To = 0 to Tf in x-degree increments.

Your program should have the ff functions:
Compute() - get iL
Display() - display results

- input validation: Tf > 0, L > 0, x is from 1 to 5
- your program should execute for as long as the user wants to continue.
- round-off results to 2 decimal places.

filename: funcexpansion
*/