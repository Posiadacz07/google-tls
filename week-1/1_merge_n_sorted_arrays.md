# Merge N sorted arrays

Merge N sorted arrays into 1 sorted array. Read the input and print the result using the provided starter code.

 
## Input
-----

The first line of the input contains one integer N, the number of sorted arrays. The next line contains N integers, the lengths of the N arrays. The following N lines contain the sorted elements of the arrays, separated by whitespaces. All elements are integers.

 
## Output
------

A sorted array containing the elements of all N arrays. The result should be output in one line, with elements separated by whitespaces.

 
## Constraints: 
------

`1 <= N <= 23’000`

For all `1 <= p <= N` and all `0 <= k < lenp`, where `lenp` is the length of the array Ap, it holds that: 
```
    0 < len1, …, lenn < 1'000
    the elements Ap[k] are of type int and 0 <= Ap[k] <= 1’000’000
    Ap[i] <= Ap[j] for 0 <= i < j < lenp
```
 
## Example
-------

**Input:**
```
3
2 3 4
1 3
2 4 5
2 3 3 4
```
 

**Output:**
```
1 2 2 3 3 3 4 4 5
```

For the example above:

`A_1 = [1, 3], A_2 = [2, 4, 5], A_3 = [2, 3, 3, 4]; `

The result is `[1, 2, 2, 3, 3, 3, 4, 4, 5]`.