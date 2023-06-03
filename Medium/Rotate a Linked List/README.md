<h2><a href="https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1?page=2&difficulty[]=0&difficulty[]=1&difficulty[]=2&status[]=unsolved&sortBy=submissions">Rotate a Linked List</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a singly linked list of size <strong>N</strong>. The task is to <strong>left-shift</strong> the linked list by <strong>k</strong> nodes, where <strong>k</strong> is a given positive integer smaller than or equal to length of the linked list. </span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 5
value[] = {2, 4, 7, 8, 9}
k = 3
<strong>Output: </strong>8 9 2 4 7<strong>
Explanation:</strong></span>
<span style="font-size:18px"><strong>Rotate 1:&nbsp;</strong>4 -&gt; 7 -&gt; 8 -&gt; 9 -&gt; 2</span>
<span style="font-size:18px"><strong>Rotate 2:</strong>&nbsp;7&nbsp;-&gt; 8&nbsp;-&gt; 9&nbsp;-&gt; 2&nbsp;-&gt; 4</span>
<span style="font-size:18px"><strong>Rotate 3:</strong>&nbsp;8&nbsp;-&gt; 9&nbsp;-&gt; 2&nbsp;-&gt; 4&nbsp;-&gt; 7</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>N = 8
value[] = {1, 2, 3, 4, 5, 6, 7, 8}
k = 4
<strong>Output: </strong>5 6 7 8 1 2 3 4</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>rotate</strong>() which takes a&nbsp;<strong>head </strong>reference as the <strong>first argument </strong>and <strong>k</strong> as the <strong>second argument,&nbsp;</strong>and returns the head of the rotated linked list.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(N).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>3</sup><br>
1 &lt;= k &lt;= N</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Accolite</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Linked List</code>&nbsp;<code>Data Structures</code>&nbsp;