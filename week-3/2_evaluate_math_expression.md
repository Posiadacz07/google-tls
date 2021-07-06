# Evaluate Math Expression

Function evaluateMathExpression is supposed to evaluate a math expression and print its value.

Expression is a string formatted as: "[someNumber] [operator] [someNumber]"

Fix the below code to return the correct answer. Focus both on code readability and correctness.

**Input**
---------
```
4 + 2
```

**Output**
---------
```
6
```
## Description
---------

1. There will always be spaces around the operator (i.e. your implementation doesn't have to cover cases that don't satisfy that condition).

2. Input numbers must be integers greater or equal to 0.

3. The operator must be either: '+' (addition), '-' (subtraction), '*' (multiplication), or '/' (division).

4. The result can be a non integer for division operations.

5. For illegal operations, throw domain_error with the message "Can't convert character to operator: +, -, /, *".

6. For characters that don't represent numbers, throw domain_error with the message "Can't convert character to digit: {character}".

7. For wrong input format, throw invalid_argument with the message "Must have 3 tokens separated by spaces".

8. For division by zero, throw invalid_argument with the message "Can't divide by 0".

9. All division operations are guaranteed to yield non-recurring decimals in the test cases.

10. For division operations, print the result with exactly 2 decimal places.

## Examples
---------
```
Input : 4 + 2
Output : 6

Input : 4 - 2
Output : -2

Input : 4 * 2
Output : 8

Input : 2 / 4 
Output : 0.50

Input : 2+2 
Output : "invalid_argument Must have 3 tokens separated by spaces"
```