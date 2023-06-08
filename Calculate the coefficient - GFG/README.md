# Calculate the coefficient
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two integers n and k, The task is to calculate Permutation Coefficient P(n,k)<br>
<strong>Note:&nbsp;</strong>P(n, k) is used to represent the number of ways to obtain an ordered subset having k elements from a set of n elements.<strong>Since this value may be large only find it modulo 10^9 + 7.</strong></span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> n = 10, k = 2
<strong>Output:</strong> 90
<strong>Explanation:</strong> <samp><code>For first case:
Ans = 10! / (10 - 2)! = 10! / 8!
10! is 8!*9*10 and 8! is 8!
Ans = 9*10 = 90</code></samp></span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> n = 10, k = 3
<strong>Output:</strong> 720</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>permutationCoeff</strong><strong>()&nbsp;</strong>which takes integers n and kas input parameters and returns an integer.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(n)<br>
<strong>Expected Space Complexity:&nbsp;</strong>O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ k ≤ n&nbsp;≤ 100000</span></p>
</div>