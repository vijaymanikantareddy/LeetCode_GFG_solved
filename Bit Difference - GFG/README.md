# Bit Difference
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">You are given two numbers <strong>A</strong> and <strong>B</strong>. The task is&nbsp;to count the number of bits needed to be flipped<strong> </strong>to convert A to B.</span><br>
<br>
<span style="font-size:18px"><strong>Example 1</strong></span><span style="font-size:18px"><strong>:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input: </strong>A = 10, B = 20
<strong>Output</strong>: 4
<strong>Explanation</strong>:
A &nbsp;= 01010
B &nbsp;= 10100
As we can see, the bits of A that need 
to be flipped are <strong>0101</strong>0. If we flip 
these bits, we get 10100, which is B.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input</strong>: A = 20, B = 25
<strong>Output</strong>: 3
<strong>Explanation</strong>:
A &nbsp;= 10100
B &nbsp;= 11001
As we can see, the bits of A that need 
to be flipped are 1<strong>01</strong>0<strong>0</strong>. If we flip 
these bits, we get 11001, which is B.</span>

</pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;</strong>The task is to complete the function <strong>countBitsFlip</strong>() that takes<strong> A </strong>and<strong> B</strong> as parameters and returns<strong> </strong>the count<strong> </strong>of the number of bits to be flipped to convert<strong> A </strong>to<strong> B</strong>.</span><br>
<br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(log N).<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1).</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong></span><br>
<span style="font-size:18px">1 ≤ A, B ≤ 10<sup>6</sup></span></p>
</div>