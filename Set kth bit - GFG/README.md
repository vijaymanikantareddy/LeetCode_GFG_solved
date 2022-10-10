# Set kth bit
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a number <strong>N</strong> and a value <strong>K</strong>. From the right, set the Kth bit in the binary representation of N. The position of Least Significant Bit(or last bit) is 0, the second last bit is 1 and so on.&nbsp;</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 10 
K = 2</span>
<span style="font-size:18px"><strong>Output:</strong>
14</span>
<span style="font-size:18px"><strong>Explanation:</strong>
Binary representation of the given number
10 is: 1 0 1 0, number of bits in the 
binary reprsentation is 4. Thus 2nd bit
from right is 0. The number after changing
this bit to 1 is: 14(1 1 1 0).</span>
</pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 15 
K = 3</span>
<span style="font-size:18px"><strong>Output:</strong>
15</span>
<span style="font-size:18px"><strong>Explanation:</strong>
The binary representation of the given
number 15 is: 1 1 1 1, number of bits
in the binary representation is 4. Thus
3rd bit from the right is 1. The number
after changing this bit to 1 is
15(1 1 1 1).</span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;</strong>&nbsp;<br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>setKthBit</strong>()&nbsp;which takes two integer N and K as input parameter and returns an integer after setting the K'th bit in N.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(1)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 10<sup>9</sup></span><br>
<span style="font-size:18px">0 &lt;= K &lt; X, where X is the number of bits in the binary representation of N.</span></p>
</div>