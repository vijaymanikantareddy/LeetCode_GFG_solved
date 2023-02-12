# Form a number divisible by 3 using array digits
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>arr</strong> of integers of length <strong>N</strong>, the task is to find whether it’s possible to construct an integer using all the digits of these numbers such that it would be divisible by 3. If it is possible then print “1” and if not print “0”.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 3
arr = {40, 50, 90}
<strong>Output:</strong> 1
<strong>Explaination:</strong> One such number is 405900.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 2
arr = {1, 4}
<strong>Output:</strong> 0
<strong>Explaination:</strong> The numbers we can form 
are 14 and 41. But neither of them are 
divisible by 3.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>isPossible()</strong> which takes N and arr as input parameters and returns 1 if we can form a number by the digits of the given number, otherwise returns 0.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, arr[i] ≤ 10<sup>5</sup></span></p>
</div>