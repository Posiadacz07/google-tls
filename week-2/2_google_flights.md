#  Google Flights 

Given flights prices between different airports, write a function which finds M-cheapest connections between a source and a destination airport. There will be at most 2000 different airports.

## Input
-----

The first line contains N, the number of airports pairs with a flight price. `0 < N < 1000000`.

Then the subsequent N lines contain three words per line,

both ASCII-only and case-sensitive. The first word is the source airport, the second word is the destination airport of the flight and the third word is the price of the flight from the source to the destination airport.

The price is always a positive integer number.

 

Please note that flights are one-way, maybe there is no flight in the opposite direction. Flights can be listed in any order, but without duplicates.

 

The next line contains M, the number of connections which should be in the output (unless there are less than M connections, in which case all should be in the output). 0 < M < 1000000.

The subsequent line contains two words, both ASCII-only and case-sensitive. The first word is the source airport and the second word is the final destination airport of the trip. In addition to these airports, a trip can contain multiple stopover airports in-between. Trip source and destination can't be the same.

 
## Output
------

There is one output line for each trip, sorted by price (in ascending order). Each line contains a space-separated list of stopover airports and a total price of a trip.

If there are several trips with the same price, they should be sorted by a number of stops, and if that is the same, then alphabetically by a smaller stop name. 

If there are no flights in the solution please return `"<no solution>"` without the quotations and without a newline at the end.

## Example
-------

**Input**
```
13
SFO JFK 500
JFK WAW 800
JFK BSL 700
JFK ZRH 850
ZRH BSL 300
SFO HEL 1000
SFO MUC 1100
SFO LHR 1100
MUC ZRH 500
LHR BSL 1
LHR ZRH 100
BSL ZRH 1
SFO ZRH 5000
10
SFO ZRH
``` 

**Output**
```
SFO LHR BSL ZRH 1102
SFO LHR ZRH 1200
SFO JFK BSL ZRH 1201
SFO JFK ZRH 1350
SFO MUC ZRH 1600
SFO ZRH 5000
``` 

## Explanation

The cheapest connection between SFO and ZRH is with two stopovers in LHR and BSL:`SFO --> LHR --> BSL --> ZRH`.

The total price of this trip is 1102:

*  for SFO --> LHR the price is 1100,
*  for LHR --> BSL the price is 1,
*  for BSL --> ZRH the price is 1.

 

There are five other possibilities to get from SFO to ZRH, with fewer connections, but more expensive.

We were asked to provide 10 connections, but as there are only 6 connections between SFO and ZRH, we output all of them.