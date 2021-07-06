# Evaluate mathematical expression

Check whether a string represents a mathematical expression and evaluate it.

In addition to the basic solution introduced during lessons, which supported only single-digit, positive numbers, and operations +, -, *, / and parentheses, the solution should also support:

    Floating point numbers: anything which consists of at least 1 digit and at most 1 dot (‘.’). (Negative numbers can be achieved by unary -.)
    Unary - even if not followed by a number.
    Power operation (‘^’). Note that we consider the power operation to be of a higher priority than a unary minus.
    Unary functions abs (absolute value) and sqrt (square root).

    Printing string  "Invalid mathematical expression.", in the following situations:
        if the input is not a valid mathematical expression, e.g. 9*+),
        or if the solution is not a real number, e.g. sqrt(-1),
        or if the left operand (base) of the power operation is negative,
        or if the solution does not exist, e.g. 1/0.
    Arbitrary number of spaces, e.g. " 2 +   (3-2)" is a valid input.

 
**Input**
-----
```
The first, and only line of input contains a string representing a mathematical expression. 
```
 
**Output**
-----
```
A single line of output, containing the result of an evaluated expression.

Please always return the output rounded to two decimal places. Use the built-in abs, sqrt and pow functions (and built-in operators) on floating-point values, no need to specially handle overflow, underflow or rounding errors.
```
## Example
-----

**Input:**
```
(3 +2) * 4
```
 

**Output:**
```
20.00
```