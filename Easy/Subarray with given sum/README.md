<h2><a href="https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&difficulty[]=0&difficulty[]=1&difficulty[]=2&status[]=unsolved&sortBy=submissions">Subarray with given sum</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an unsorted array <strong>A </strong>of size <strong>N</strong>&nbsp;that contains only&nbsp;positive integers, find a continuous sub-array that adds to a given number <strong>S&nbsp;</strong>and return the left and right index(<strong>1-based indexing</strong>) of that subarray.</span></p>

<p><span style="font-size:18px">In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.</span></p>

<p><span style="font-size:18px"><strong>Note</strong>:-&nbsp;You have to return an ArrayList consisting of two elements left and right. In case no such subarray exists return an array consisting of element <strong>-1</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5, S = 12
A[] = {1,2,3,7,5}
<strong>Output: </strong>2 4<strong>
Explanation: </strong>The sum of elements 
from 2nd position to 4th position 
is 12.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 10, S = 15
A[] = {1,2,3,4,5,6,7,8,9,10}
<strong>Output: </strong>1 5<strong>
Explanation: </strong>The sum of elements 
from 1st position to 5th position
is 15.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. The task is to complete the function <strong>subarraySum</strong>() which takes arr, N, and S as input parameters and returns an <strong>ArrayList&nbsp;</strong>containing the&nbsp;<strong>starting </strong>and <strong>ending </strong>positions&nbsp;of the&nbsp;first such occurring subarray from the left where sum equals to S. The <strong>two indexes in the array</strong> should be according to <strong>1-based indexing</strong>. If no such subarray is found, return an array consisting of only one element that is -1.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N)<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup></span><br>
<span style="font-size:18px">1 &lt;= A</span><sub>i</sub><span style="font-size:18px"> &lt;= 10<sup>9</sup></span><br>
<span style="font-size:18px">0&lt;= S</span><span style="font-size:18px">&nbsp;&lt;= 10<sup>14</sup></span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Facebook</code>&nbsp;<code>Google</code>&nbsp;<code>Visa</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Algorithms</code>&nbsp;<code>Arrays</code>&nbsp;<code>Data Structures</code>&nbsp;<code>prefix-sum</code>&nbsp;<code>Searching</code>&nbsp;<code>sliding-window</code>&nbsp;