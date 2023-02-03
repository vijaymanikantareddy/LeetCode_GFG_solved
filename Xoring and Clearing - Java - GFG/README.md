# Xoring and Clearing - Java
## Easy
<div class="problems_problem_content__Xm_eO"><p><em><span style="font-size:18px">Bitwise operations help us in a lot of problems. We can find the non-repeating element in an array, find number of set-bits, do division, find subsets and so on. Indeed, we can see that learning to cleverly use bitwise operations is vital to any programmer.</span></em></p>

<p><span style="font-size:18px">You are given an array<strong> A of size N</strong>. You need to do the following:</span></p>

<ol>
	<li><span style="font-size:18px">You need to <strong>xor </strong>the elements of the arrays with their<strong> respective indices</strong>(index starting from 0).</span></li>
	<li><span style="font-size:18px">After step1, <strong>print the array.</strong></span></li>
	<li><span style="font-size:18px">Now,<strong> set all the elements of A to zero</strong>.</span></li>
	<li><span style="font-size:18px">Now, <strong>print A.</strong></span></li>
</ol>

<p><span style="font-size:18px"><strong>Input Format:</strong><br>
The first line contains <strong>T</strong>, the number of testcases. T testcases follow. Each testcase contains two lines of input. The first line contains N, the size of the array. The second line contains the elements of the array.</span></p>

<p><span style="font-size:18px"><strong>Output Format:</strong><br>
For each testcase, in a new line, print the <strong>output</strong>.</span></p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Since this is a function problem, you don't need to take any input. Just complete the provided functions.</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= T &lt;= 100<br>
1 &lt;= N &lt;= 1000<br>
1 &lt;= A<sub>i</sub> &lt;= 1000</span></p>

<p><span style="font-size:18px"><strong>Example:</strong><br>
<strong>Input:</strong><br>
1<br>
10<br>
1 2 3 4 5 6 7 8 9 10<br>
<strong>Output:</strong><br>
1 3 1 7 1 3 1 15 1 3<br>
0 0 0 0 0 0 0 0 0 0</span></p>

<p><strong><span style="font-size:18px">Explanation:<br>
Testcase1:</span></strong><br>
<span style="font-size:18px">First we take xor of every element with their indices, like 1xor0, 2xor1, 3xor2, 4xor3 and so on.<br>
Now print the resultant array<br>
Now set all the elements of array to zero<br>
Now print the resultant array</span></p>

<p>&nbsp;</p>

<p>&nbsp;</p>
</div>