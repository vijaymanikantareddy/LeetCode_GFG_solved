<h2><a href="https://www.geeksforgeeks.org/problems/minimum-number-of-deletions4610/1?page=1&category=palindrome&difficulty=Easy,Medium,Hard&status=unsolved&sortBy=submissions">Minimum number of deletions.</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a string 'str' of size ‘n’. The task is to remove or delete the minimum number of characters from the string so that the resultant string is a palindrome. Find the minimum number of characters we need to remove.</span><br><span style="font-size: 18px;"><strong>Note:</strong> The order of characters should be maintained.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>n = 7,<strong> </strong>str = "aebcbda"
<strong>Output:</strong> 2
<strong>Explanation</strong>: We'll remove 'e' and
'd' and the string become "abcba".</span></pre>
<p><span style="font-size: 18px;">â€‹<strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input</strong>: n = 3, str = "aba"
<strong>Output:</strong> 0
<strong>Explanation</strong>: We don't remove any
character.
</span></pre>
<p><span style="font-size: 18px;"><strong>Your Task:&nbsp;&nbsp;</strong><br>You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minDeletions()</strong>&nbsp;which takes the string&nbsp;<strong>s </strong>and length of<strong> s&nbsp;</strong>as inputs and returns the answer.<br><br><strong>Expected Time Complexity:</strong>&nbsp;O(|str|<sup>2</sup>)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(|str|<sup>2</sup>)<br><br><strong>Constraints:</strong><br>1 ≤ |str| ≤&nbsp;10<sup>3</sup></span></p>
<p>&nbsp;</p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>palindrome</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;