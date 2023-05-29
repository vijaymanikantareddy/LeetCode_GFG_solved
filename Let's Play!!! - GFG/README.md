# Let's Play!!!
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Let's play a game!! Given a matrix mat[][] with n&nbsp;x m&nbsp;elements. Your task is to check that matrix is Super Similar or not. To perform this task you have to follow these Rules: Firstly all even index rows to be Rotated left and odd index rows to right, And Rotation is done X times(Index starting from zero). Secondly, After all the Rotations check if the initial and the final Matrix are same Return 1 else 0.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> n = 2, m = 2
mat = {{1, 2}, 
&nbsp;      {5, 6}}
x = 1
<strong>Output:</strong> 0
<strong>Explanation:</strong> Matrix after rotation:
mat = {{ 2, 1}
&nbsp;      { 6, 5}}
After one rotation mat is 
not same as the previous one.</span>
</pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong> n = 2, m = 4
mat = {{1, 2, 1, 2}, 
&nbsp;      {2, 1, 2, 1}}
x = 2
<strong>Output:</strong> 1
<strong>Explanation:</strong> After two rotation mat is 
same as the previous one.</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to read input or print anything. Your task is to complete the function <strong>isSuperSimilar()</strong> which takes n, m, x and the matrix as input parameter and returns 1&nbsp;if the initial and the final Matrix are same&nbsp;else returns 0.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(n*m)<br>
<strong>Expected Auxiliary Space:</strong> O(n*m)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ n, m ≤ 30<br>
1&nbsp;≤ mat[i][j] ≤ 100&nbsp;<br>
1 ≤ x&nbsp;≤ 20</span></p>
</div>