<h2><a href="https://practice.geeksforgeeks.org/problems/find-nth-element-of-spiral-matrix/1">Find nth element of spiral matrix</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a matrix with <strong>n</strong> rows and <strong>m </strong>columns. Your task is to find the kth element which is obtained while traversing the matrix spirally. You need to complete the method<strong> findK</strong>&nbsp;which takes four arguments the first argument is the matrix A and the next two arguments will be n and m denoting the size of the matrix A and then the forth argument is an integer&nbsp;&nbsp;k denoting the kth element . The function will return the kth element obtained while traversing the matrix spirally.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1</strong></span><span style="font-size:18px"><strong>:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>n = 3, m = 3, k = 4
A[][] = {{1 2 3},
&nbsp;        {4 5 6},
&nbsp;        {7 8 9}}
<strong>Output:
</strong>6<strong>
Explanation:
</strong>The matrix above will look like&nbsp;
1 2 3
4 5 6
7 8 9
and the 4th element in spiral&nbsp;fashion
will be 6 .
</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You only need to implement the given function&nbsp;<strong>findK()</strong>. Do not read input, instead use the arguments given in the function. Return the K'th element obtained by traversing matrix spirally.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N*M)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(N*M)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=n,m&lt;=20<br>
1&lt;=k&lt;=n*m</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Matrix</code>&nbsp;<code>Data Structures</code>&nbsp;