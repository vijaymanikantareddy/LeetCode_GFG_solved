# Minimize the sum of product
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:18px">You are given two arrays,<strong> A</strong> and <strong>B</strong>, of equal size <strong>N</strong>. The task is to find the minimum value of <strong>A[0] * B[0] + A[1] * B[1] + .... + A[N-1] * B[N-1],</strong> where shuffling of elements of arrays <strong>A</strong> and <strong>B</strong> is allowed.<br>
<br>
<br>
<strong>Example 1:</strong></span></span></p>

<pre><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:18px"><strong>Input:</strong>
N = 3 
A[] = {3, 1, 1}
B[] = {6, 5, 4}
<strong>Output:</strong>
23 </span>
<span style="font-size:18px"><strong>Explanation:</strong></span>
<span style="font-size:18px">1*6+1*5+3*4 = 6+5+12
= 23 is the minimum sum</span></span></pre>

<p>&nbsp;</p>

<p><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:18px"><strong>Example 2:</strong></span></span></p>

<pre><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:18px"><strong>Input:</strong>
N = 5
A[] = {6, 1, 9, 5, 4}
B[] = {3, 4, 8, 2, 4}
<strong>Output:</strong>
80
<strong>Explanation:</strong></span><span style="font-size:18px">
2*9+3*6+4*5+4*4+8*1
=18+18+20+16+8
= 80 is the minimum sum</span></span></pre>

<p>&nbsp;</p>

<p><span style="font-family:arial,helvetica,sans-serif"><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>minValue()</strong>&nbsp;which takes the arrays <strong>A[]</strong>, <strong>B[]</strong> and its size <strong>N</strong><strong> </strong>as inputs and returns the minimum sum.</span></span><br>
&nbsp;</p>

<p><br>
<span style="font-family:arial,helvetica,sans-serif"><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N. log(N))<br>
<strong>Expected Auxiliary Space:</strong> O(1)<br>
<br>
<br>
<strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ A[] ≤ 10<sup>6</sup></span></span></p>
</div>