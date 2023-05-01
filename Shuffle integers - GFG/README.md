# Shuffle integers
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given an array <strong>arr[]</strong> of <strong>n</strong> elements in the following format {a1, a2, a3, a4, .., an/2, b1, b2, b3, b4, ., bn/2}, the task is shuffle the array to {a1, b1, a2, b2, a3, b3, , an/2, bn/2} without using extra space.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>n = 4, arr[] = {1, 2, 9, 15}
<strong>Output:</strong>  1 9 2 15
<strong>Explanation</strong>: a1=1 , a2=2 , b1=9 , b2=15
So the final array will be :  
a1, b1, a2, b2 = { 1, 9, 2, 15 }

<strong>Example 2:</strong>
<strong>Input: </strong>n = 6
arr[] = {1, 2, 3, 4, 5, 6}
<strong>Output:</strong> 1 4 2 5 3 6</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
This is a function problem. You don't need to take any input, as it is already accomplished by the driver code. You just need to complete the function <strong>shuffleArray</strong>() that takes array<strong> arr[], </strong>and an integer<strong> n</strong>&nbsp;as parameters and modifies the given array according to the above-given pattern.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n).<br>
<strong>Expected Auxiliary Space:</strong> O(1).</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n ≤ 10<sup>5</sup><br>
0≤ arr</span><span style="font-size:15px">[i]</span><span style="font-size:18px">≤ 10</span><sup style="font-size:18px">3</sup></p>
</div>