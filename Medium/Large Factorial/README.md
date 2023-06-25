<h2><a href="https://practice.geeksforgeeks.org/problems/large-factorial4721/1?page=3&difficulty[]=1&difficulty[]=2&sortBy=difficulty">Large Factorial</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given an array <strong>A</strong> of integers&nbsp;of length <strong>N</strong>. You need to calculate&nbsp;factorial of each number.&nbsp;The answer can be very large, so print it modulo <strong>10<sup>9&nbsp;</sup>+ 7</strong>.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
A[] = {0, 1, 2, 3, 4}
<strong>Output:</strong>
1 1 2 6 24
<strong>Explanation:</strong>
Factorial of 0 is 1, 
factorial of 1 is 1,&nbsp;factorial of 2&nbsp;is 2,&nbsp;
factorial of 3&nbsp;is 6 and so on.
</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 3
A[] = {5, 6, 3}
<strong>Output:</strong>
120 720 6
<strong>Explanation:</strong>
Factorial of 5 is 120, 
factorial of 6 is 720,&nbsp;
factorial of 3&nbsp;is 6.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
Complete the function <strong>factorial()</strong>&nbsp;which takes<strong> </strong>list<strong> a&nbsp;</strong>and single integer&nbsp;<strong>n</strong>,&nbsp;as input parameters&nbsp;and returns a list of factorials of the numbers in the list a.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(max(A) + N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(max(A))</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>5</sup><br>
0 &lt;= A[i] &lt;= 10<sup>5</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Mathematical</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;