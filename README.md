# Google-Kickstart
These programs are from the rounds of Google Kickstart 2021 I competed in.

Round F:
Problem
In the city where you live, Kickstartland, there is one particularly long street with N houses on it. This street has length N, and the N houses are evenly placed along it, that is, the first house is at position 1, the second house is at position 2, and so on. The distance between any pair of houses i and j is |i−j|, where |x| denotes the absolute value of x.

Some of these houses have trash bins in front of them. That means that the owners of such houses do not have to walk when they want to take their trash out. However, for the owners of houses that do not have trash bins in front of them, they have to walk towards some house that has a trash bin in front of it, either to the left or to the right of their own house.

To save time, every house owner always takes their trash out to the trash bin that is closest to their houses. If there are two trash bins that are both the closest to a house, then the house owner can walk to any of them.

Given the number of houses N, and the description of which of these houses have trash bins in front of them, find out what is the sum of the distances that each house owner has to walk to take their trashes out. You can assume that at least one house has a trash bin in front of it.

Input
The first line of the input gives the number of test cases, T. T test cases follow. Each test case consists of two lines.

The first line of each test case contains an integer N, denoting the number of houses on the street.

The second line of each test case contains a string S of length N, representing which houses have trash bins in front of them. If the i-th character in string S is equal to 1, then it means that the i-th house has a trash bin in front of it. Otherwise, if it is equal to 0, then it means that the i-th house does not have a trash bin in front of it.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the sum of the distances that each house owner has to walk to take their trashes out.

Round H: 
Problem
You are given a string S which denotes a padlock consisting of lower case English letters. You are also given a string F consisting of set of favorite lower case English letters. You are allowed to perform several operations on the padlock. In each operation, you can change one letter of the string to the one following it or preceding it in the alphabetical order. For example: for the letter c, you are allowed to change it to either b or d in an operation. The letters can be considered in a cyclic order, i.e., the preceding letter for letter a would be letter z. Similarly, the following letter for letter z would be letter a.

Your aim is to find the minimum number of operations that are required such that each letter in string S after applying the operations, is present in string F.

Input
The first line of the input gives the number of test cases, T. T test cases follow.

Each test case consists of two lines.
The first line of each test case contains the string S.
The second line of each test case contains the string F.

Output
For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the minimum number of operations that are required such that each letter in string S after applying the operations, is one of the characters in string F.
