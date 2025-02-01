<h2><a href="https://www.geeksforgeeks.org/problems/rearrange-characters4649/1">Rearrange characters</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a string S with repeated characters. The task is to rearrange characters in a string such that no two adjacent characters are the same.<br>
<strong>Note:</strong> The string has only lowercase English alphabets and it can have multiple solutions. Return any one of them.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input : </span></strong><span style="font-size:18px">str = "geeksforgeeks"
</span><span style="font-size:18px"><strong>Output:</strong> 1
</span><strong><span style="font-size:18px">Explanation: </span></strong><span style="font-size:18px">All the repeated characters of the
given string can be rearranged so that no 
adjacent characters in the string is equal.
Any correct rearrangement will show a output
of 1.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input :</strong> </span><span style="font-size:18px">str = "bbbbb"
</span><span style="font-size:18px"><strong>Output:</strong> 0
</span><strong><span style="font-size:18px">Explanation: </span></strong><span style="font-size:18px">Repeated characters in the string
cannot be rearranged such that there should not
be any adjacent repeated character.</span></pre>

<div><strong><span style="font-size:18px">Your task :</span></strong></div>

<div><span style="font-size:18px">You don't have to read input or print anything. Your task is to complete the function</span><strong><span style="font-size:18px">rearrangeString() </span></strong><span style="font-size:18px">which takes the string as input and returns the modified string. If the string cannot be modified return "-1".<br>
<strong>Note:</strong>The generatedoutput is 1 if the string is successfully rearranged and is 0 if rearranging is not possible.</span></div>

<div>&nbsp;</div>

<div><span style="font-size:18px"><strong>Expected Time Complexity : </strong>O(NlogN), N = length of String</span></div>

<div><span style="font-size:18px"><strong>Expected Auxiliary Space : </strong>O(number of english alphabets)</span></div>

<div>&nbsp;</div>

<div><strong><span style="font-size:18px">Constraints :</span></strong></div>

<div><span style="font-size:18px">1 &lt;= length of string &lt;= 10<sup>4</sup></span></div>
</div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Heap</code>&nbsp;<code>STL</code>&nbsp;<code>Data Structures</code>&nbsp;