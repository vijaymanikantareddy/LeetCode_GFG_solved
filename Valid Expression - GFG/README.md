# Valid Expression
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string S, composed of different combinations of '(' , ')', '{', '}', '[', ']'. The task is to verify the validity of the arrangement.</span></p>

<p><span style="font-size:18px">An input string is valid if:</span></p>

<p><span style="font-size:18px">&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;1. Open brackets must be closed by the same type of brackets.<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp;2. Open brackets must be closed in the correct order.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = ()[]{}
<strong>Output:</strong> 1
<strong>Explanation: </strong>The arrangement is valid.</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = ())({}
<strong>Output:</strong> 0
<strong>Explanation: </strong>Arrangement is not valid.</span></pre>

<p><strong><span style="font-size:18px">Example 3:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = ([)]
<strong>Output:</strong> 0
<strong>Explanation: </strong>Arrangement is not valid.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>valid()</strong> which takes S as input and returns a boolean value denoting whether the arrangement is valid or not.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(N) where N is the length of S.<br>
<strong>Expected Auxiliary Space: </strong>O(N)&nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>4</sup></span></p>
</div>