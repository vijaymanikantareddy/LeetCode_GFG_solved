<h2><a href="https://www.geeksforgeeks.org/problems/shortest-prime-path--141631/1?page=2&category=BFS&status=unsolved&sortBy=submissions">Shortest Prime Path</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">You are given two four digit prime numbers <strong>Num1 </strong>and <strong>Num2.</strong>&nbsp;Find the distance of the shortest path from Num1 to Num2 that can be attained by altering only single digit at a time such that every number that we get after changing a digit is a four digit prime number with no leading zeros.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;">Num1 = 1033 
Num2 = 8179</span>
<span style="font-size: 18px;"><strong>Output: </strong></span><span style="font-size: 18px;">6</span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">1033 -&gt; 1<strong>7</strong>33 -&gt; <strong>3</strong>733 -&gt; 373<strong>9</strong> -&gt; 37<strong>7</strong>9 -&gt; <strong>8</strong>779 -&gt; 8<strong>1</strong>79.</span>
<span style="font-size: 18px;">There are only 6 steps reuired to reach Num2 from Num1. </span>
<span style="font-size: 18px;">and all the intermediate numbers are 4 digit prime numbers.</span></pre>
<p><strong><span style="font-size: 18px;">Example 2:</span></strong></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;">Num1 = 1033 
Num2 = 1033</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">0</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:</strong>&nbsp;&nbsp;<br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>solve</strong>()&nbsp;which takes two integers&nbsp;Num1 and Num2&nbsp;as input parameters&nbsp;and returns the distance of the shortest path from Num1 to Num2.&nbsp;If it is unreachable then return -1.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(1)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1000&lt;=Num1,Num2&lt;=9999<br>Num1 and Num2 are prime numbers.</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Prime Number</code>&nbsp;<code>Shortest Path</code>&nbsp;<code>BFS</code>&nbsp;<code>Algorithms</code>&nbsp;