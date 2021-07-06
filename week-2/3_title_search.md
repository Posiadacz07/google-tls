# Title Search

You are given a list of N web page titles. Then you are given Q search query lines and your goal is for each search query to print up to 10 page titles where all words in that query are found in the page title (in any order and any number of times). 

If there are more than 10 matches, print 10 with the shortest titles (smallest number of total words). Otherwise print all of them. If multiple matching titles have the same number of words, print them in lexicographic order.

See the samples for an explanation.

 
## Input
-------

You will be given an integer N (1 <= N <= 105) representing the number of titles. The next N lines will contain the titles (not necessarily unique), which consist of 1 or more space separated words. You will then be given  an integer Q (1 <= Q <= 105), representing the number of query lines, followed by Q lines consisting of 1 or more space separated words. Words in the titles or the queries may appear multiple times. If a title appears multiple times in the input, all of them should be considered in the output following the output constraints and format.

All words contain only lowercase latin letters. The length of a single word is at most 105. The sum of all words' lengths in the list of titles is at most 3 * 105 and the sum of all query words is at most 3 * 105.

 
## Output
---------

For each query, print one number M (M <= 10), the number of found titles. Then on the next M lines print the M titles ordered by ascending total number of words. If there are ties, print the smallest lexicographically title first.

 
## Examples
--------------

**Input**
```
8
google code jam is launching
hash code competition results are announced
google launches tech elevate program
code jam final round
youtube newest features
football world cup results
top viewed videos last year
australian open singles results
5
world cup football
results
views
jam code
google program
``` 

**Output**
```
1
football world cup results
3
australian open singles results
football world cup results
hash code competition results are announced
0
code jam final round
google code jam is launching
1
google launches tech elevate program
```
 

## Notes

The 3rd query has the word "views" which doesn't appear in the given titles so the answer is 0

The 4th query has the word "code" which appears in 3 different titles but "jam" appears in only 2 of them. The output is sorted on total number of words in these titles.