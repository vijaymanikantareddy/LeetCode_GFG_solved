<h2><a href="https://www.geeksforgeeks.org/problems/search-pattern-z-algorithm--141631/1?page=2&status=unsolved&sortBy=submissions">Search Pattern (Z-algorithm)</a></h2><h3>Difficulty Level : Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two strings, one is a text string and the other is a pattern string. The task is to print the indexes of all the occurrences of the pattern&nbsp;string in the text string. For printing, Starting Index of a string should be taken as&nbsp;1.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
S = "batmanandrobinarebat", pat = "bat"
<strong>Output:</strong> 1 18
<strong>Explanation</strong>: The string "bat" occurs twice
in S, one starts are index 1 and the other
at index 18. </span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: 
S = "abesdu", pat = "edu"
<strong>Output:</strong> -1
<strong>Explanation</strong>: There's not substring "edu"
present in S.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>search()&nbsp;</strong>which takes the string S and the string pat as inputs and returns an array denoting the start indices (<strong>1-based</strong>)&nbsp;of substring pat in the string S.&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Note: </strong>You don't need to return -1 yourself when there are no possible answers, just return an empty list.</span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(|S|).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(|S|).</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ |S| ≤ 10<sup>5</sup><br>
1 ≤ |pat| ≤ |S|</span></p>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Pattern Searching</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;