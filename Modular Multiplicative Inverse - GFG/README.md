# Modular Multiplicative Inverse
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two integers<strong> ‘a’ </strong>and<strong> ‘m</strong>’. The task is to find the smallest modular multiplicative inverse of <strong>‘a’</strong> under modulo<strong> ‘m’</strong>.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>a = 3
m = 11
<strong>Output: </strong>4
<strong>Explanation: </strong>Since (4*3) mod 11 = 1, 4 
is modulo inverse of 3. One might think,
15 also as a valid output as "(15*3)
mod 11"  is also 1, but 15 is not in 
ring {0, 1, 2, ... 10}, so not valid.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>a = 10
m = 17
<strong>Output: </strong>12
<strong>Explanation: </strong>Since (12*10) mod 17 = 1,
12 is the modulo inverse of 10.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function</span><strong> </strong><span style="font-size:18px"> <strong>function modInverse()&nbsp;</strong>that takes <strong>a and m as input parameters </strong>and <strong>returns </strong>modular multiplicative inverse of <strong>‘a’</strong> under modulo<strong> ‘m’</strong>. If the modular multiplicative inverse doesn't exist&nbsp;<strong>return -1.</strong></span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity</strong> : O(m)<br>
<strong>Expected Auxilliary Space</strong> : O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= a&nbsp;&lt;= 10<sup>4</sup><br>
1 &lt;= m &lt;= 10<sup>4</sup></span></p>
</div>