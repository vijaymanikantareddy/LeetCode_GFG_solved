# Find duplicate rows in a binary matrix
## Hard
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given a boolean matrix of size RxC where each cell contains either&nbsp;0 or 1, find the row numbers of row (0-based) which already exists or are repeated.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
R = 2, C = 2
matrix[][] = {{1, 0},
              {1, 0}}
<strong>Output: </strong>
1</span>
<span style="font-size:18px"><strong>Explanation:</strong>
Row 1 is duplicate of Row 0.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
R = 4, C = 3
matrix[][] = {{ 1, 0, 0},
              { 1, 0, 0},
              { 1, 0, 0},
              { 0, 0, 0}}</span>
<span style="font-size:18px"><strong>Output: </strong>
1 2</span> 
<span style="font-size:18px"><strong>Explanation:</strong>
Row 1 and Row 2 are duplicates of Row 0. </span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You dont need to read input or print anything. Complete the function <strong>repeatedRows()</strong> that takes the matrix as input parameter and returns a list of row numbers which are duplicate rows.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(R * C)<br>
<strong>Expected Auxiliary Space:</strong> O(R*C)&nbsp;</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ R ≤ 1000<br>
1 ≤ C ≤ 20</span><br>
<span style="font-size:18px">0 ≤ matrix[i][j] ≤ 1</span></p>
</div>