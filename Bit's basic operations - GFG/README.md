# Bit's basic operations
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Geek is learning data structures. He wants to learn the trie data structure, but there are a few bit's prerequisites that he must first understand.</span></p>
<p><span style="font-size: 18px;">Given three bit manipulations functions: <strong>XOR</strong>, <strong>check</strong> and <strong>setBit</strong>.</span></p>
<p><span style="font-size: 18px;">In <strong>XOR</strong> function you are given two integers <strong>n</strong>&nbsp;and <strong>m</strong>&nbsp;return the <strong>xor</strong> of <strong>n</strong>&nbsp;and <strong>m</strong>.</span></p>
<p><span style="font-size: 18px;">In <strong>check</strong> function you are given two&nbsp;integer <strong>a</strong>&nbsp;and <strong>b</strong>&nbsp;return 1 if <strong>a</strong><sup><strong>th</strong>&nbsp;</sup>bit (1-indexed) of <strong>b</strong>&nbsp;is set otherwise return 0.</span></p>
<p><span style="font-size: 18px;">In <strong>setBit</strong> function you are given two integer <strong>c</strong>&nbsp;and <strong>d</strong>, set the <strong>c</strong><sup><strong>th</strong>&nbsp;</sup>bit (0-indexed) of <strong>d</strong> if not yet set .</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong>
n = 1, m = 2
a = 3, b = 4
c = 5, d = 6
<strong>Output: </strong>3 1 38
<strong>Explanation:</strong> 1 xor 2 = 3, 3<sup>rd </sup>bit of 4 is set. After setting 5<sup>th </sup>bit of 6 result is 100110 which in decimal form is 38.</span>
</pre>
<p><span style="font-size: 18px;">Example 2:</span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong> 
n = 7, m = 8
a = 9, b = 10
c = 11, d = 12 
<strong>Output: </strong>15 0 2060 
<strong>Explanation:</strong> 7 xor 8 = 15, 9<sup>th</sup><sup> </sup>bit of 10 is not set. After setting 11<sup>th </sup>bit of 12 result is 100000001100 which in decimal form is 2060.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 &lt;= n&nbsp;&lt;= 10<sup>5</sup></span><br><span style="font-size: 18px;">1 &lt;= m&nbsp;&lt;= 10<sup>5</sup></span><br><span style="font-size: 18px;">1 &lt;= a&nbsp;&lt;= 9<br>1 &lt;= b&nbsp;&lt;= 10<sup>5</sup><br>1 &lt;= c&nbsp;&lt;= 9<br>1 &lt;= d&nbsp;&lt;= 10<sup>5</sup></span></p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete three&nbsp;functions <strong>XOR(),&nbsp;check() and set()</strong>.</span></p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong>&nbsp;O(1)<br><strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p></div>