<h2><a href="https://www.geeksforgeeks.org/problems/smallest-divisor/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card">Smallest Divisor</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">You are given an array of integers&nbsp;<strong>arr</strong>&nbsp;and an integer&nbsp;<strong>k</strong>, your task is to find the smallest positive integer divisor, such that upon dividing all the elements of the given array by it, the sum of the division's result is less than or equal to the given integer k.</span></p>
<p><span style="font-size: 14pt;">Note: Each result of the division is rounded to the nearest integer greater than or equal to that element. For Example: 7/3 = 3.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 2, 5, 9], k = 6
<strong>Output: </strong>5
<strong>Explanation: </strong>If the divisor is 5 the sum will be 5 (1+1+1+2), which is less than 6.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [2, 3, 7, 4, 10], k = 5
<strong>Output: </strong>10</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [7, 3, 3, 6], k = 10
<strong>Output: </strong>3</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 &lt;= nums.length() &lt;= 10<sup>5</sup><br>1 &lt;= nums[i] &lt;= 10<sup>6</sup><br>nums.length() &lt;= k &lt;= 10<sup>6</sup></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Binary Search</code>&nbsp;<code>Arrays</code>&nbsp;<code>Algorithms</code>&nbsp;