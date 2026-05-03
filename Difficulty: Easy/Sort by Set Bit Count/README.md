<h2><a href="https://www.geeksforgeeks.org/problems/sort-by-set-bit-count1153/1">Sort by Set Bit Count</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given an array <strong>arr[]</strong> of integers, sort the array (in descending order) according to count of set bits in binary representation of array elements.&nbsp; </span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> For integers having same number of set bits in their binary representation, sort according to their position in the original array i.e., a stable sort.</span></p>
<div><span style="font-size: 18px;"><strong>Examples:</strong></span></div>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [5, 2, 3, 9, 4, 6, 7, 15, 32]
<strong>Output: </strong>[15, 7, 5, 3, 9, 6, 2, 4, 32]
<strong>Explanation: </strong>The integers in their binary representation are:
15 - 1111
7  - 0111
5  - 0101
3  - 0011
9  - 1001
6  - 0110
2  - 0010
4  - 0100
32 - 10000
hence the non-increasing sorted order is: [15], [7], [5, 3, 9, 6], [2, 4, 32]</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 2, 3, 4, 5, 6]
<strong>Output:</strong> [3, 5, 6, 1, 2, 4]
<strong>Explanation: </strong>The integers in their binary representation are:<strong><br></strong>3  - 0011
5  - 0101
6  - 0110
1  - 0001
2  - 0010
4  - 0100
hence the non-increasing sorted order is: [3, 5, 6], [1, 2, 4]</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>5</sup><br>1 ≤ arr[i] ≤ 10<sup>6</sup> </span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Sorting</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;