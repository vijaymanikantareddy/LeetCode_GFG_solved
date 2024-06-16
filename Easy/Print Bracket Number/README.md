<h2><a href="https://www.geeksforgeeks.org/problems/print-bracket-number4058/1?page=2&category=Stack&difficulty=Easy,Medium,Hard&status=unsolved&sortBy=submissions">Print Bracket Number</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string S, the task is to find the bracket numbers.&nbsp;</span></p>
<p><strong><span style="font-size: 18px;">Example 1:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>  S = "(aa(bdc))p(dee)</span><span style="font-size: 18px;">"
<strong>Output:</strong> 1 2 2 1 3 3
<strong>Explanation:</strong> The highlighted brackets in
the given string <strong>(</strong>aa<strong>(</strong>bdc<strong>))</strong>p<strong>(</strong>dee<strong>)</strong> has been 
assigned the numbers as: 1 2 2 1 3 3.</span>
</pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>  S = "(((()("
<strong>Output:</strong> 1 2 3 4 4 5
<strong>Explanation:</strong> The highlighted brackets in
the given string <strong>(((()(</strong> has been assigned
the numbers as: 1 2 3 4 4 5</span>
</pre>
<div><span style="font-size: 18px;"><strong>User Task:</strong><br>Your task is to complete the function <strong><code>bracketNumbers</code>()&nbsp;</strong>which takes a single string as input and returns a list of numbers. You do not need to take any input or print anything.</span></div>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:&nbsp;</strong>O(|S|)<br><strong>Expected Auxiliary Space:&nbsp;</strong>O(|S|)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= |S| &lt;= 10<sup>5</sup></span><br><span style="font-size: 18px;">S contains lowercase English alphabets, and '(', ')' characters<br>At any time the number of opening brackets is greater than closing brackets</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Stack</code>&nbsp;<code>Regular Expression</code>&nbsp;<code>Data Structures</code>&nbsp;