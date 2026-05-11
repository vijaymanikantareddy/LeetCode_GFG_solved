<h2><a href="https://www.geeksforgeeks.org/problems/palindrome-pairs/1">Palindrome Pairs</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given&nbsp;</span><span style="font-size: 18px;">an array <strong>arr[]</strong> consisting of <strong>n </strong>strings. Determine whether there exists a pair of indices <strong>(i, j) </strong>such that <strong>i ≠ j </strong>and the concatenation <strong>arr[i] + arr[j]</strong> forms a palindrome.</span></p>
<p><span style="font-size: 18px;">Return <strong>true</strong> if such a pair exists; otherwise, return <strong>false</strong>.</span></p>
<p><strong><span style="font-size: 18px;">Note:&nbsp;</span></strong><span style="font-size: 18px;">A string is considered a palindrome if it reads the same forward and backward.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = ["geekf", "geeks", "or", "keeg", "abc", "bc"]<strong>
Output: </strong>true<strong>
Explanation: </strong>There is a pair "geekf" and "keeg". Their concatenation "geekfkeeg" is a palindrome.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = ["abc", "xyxcba", "geekst", "or", "bc"]<strong>
Output: </strong>true<strong>
Explanation: </strong>There is a pair "abc" and "xyxcba". Their concatenation "abcxyxcba" is a palindrome.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = ["aa"]<strong>
Output: </strong>false
<strong>Explanation: </strong>There is only one string present, so the output is false.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ n ≤ 2*10<sup>4</sup></span><br><span style="font-size: 18px;">1 ≤ |arr[i]| ≤ 10</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Trie</code>&nbsp;<code>Advanced Data Structure</code>&nbsp;