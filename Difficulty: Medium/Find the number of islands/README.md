<h2><a href="https://www.geeksforgeeks.org/problems/find-the-number-of-islands/1">Find the number of islands</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given a grid of size n*m (n is the number of rows and m is the number of columns in the grid) consisting of '0's (Water)&nbsp;and '1's(Land). Find the number of islands.</span><br><br><span style="font-size: 14pt;"><strong>Note:&nbsp;</strong>An island is either surrounded by water or the boundary of a grid and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>grid = [[0,1],[1,0],[1,1],[1,0]]
<strong>Output: </strong>1
<strong>Explanation:
</strong>The grid is-
0 <span style="color: #000080;">1</span>
<span style="color: #000080;">1</span> 0
<span style="color: #000080;">1</span> <span style="color: #000080;">1
1</span> 0
All lands are connected.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>grid = [[0,1,1,1,0,0,0],[0,0,1,1,0,1,0]]
<strong>Output: </strong>2
<strong>Expanation:
</strong>The grid is-
0 <span style="color: #000080;">1 1 1</span> 0 0 0
0 0 <span style="color: #000080;">1 1</span> 0 <span style="color: #ff0000;">2</span> 0&nbsp;
There are two islands in the grid. One island is marked by '1' and the other by '2'.
</span></pre>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:&nbsp;</strong>O(n*m)<br><strong>Expected Space Complexity:&nbsp;</strong>O(n*m)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ n, m ≤ 500<br>0 ≤&nbsp;<span style="background-color: #ffffff; font-family: Arial; white-space-collapse: preserve;">grid[i][j] </span>≤ 1</span><span style="font-size: 14pt;">Given a grid of size n*m (n is the number of rows and m is the number of columns in the grid) consisting of '0's (Water)&nbsp;and '1's(Land). Find the number of islands.</span></p>
<p><br><span style="font-size: 14pt;"><strong>Note:&nbsp;</strong>An island is either surrounded by water or the boundary of a grid and is formed by connecting adjacent lands horizontally or vertically or diagonally i.e., in all 8 directions.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>grid = [[0,1],[1,0],[1,1],[1,0]]
<strong>Output: </strong>1
<strong>Explanation:
</strong>The grid is-
0 <span style="color: #000080;">1</span>
<span style="color: #000080;">1</span> 0
<span style="color: #000080;">1</span> <span style="color: #000080;">1
1</span> 0
All lands are connected.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>grid = [[0,1,1,1,0,0,0],[0,0,1,1,0,1,0]]
<strong>Output: </strong>2
<strong>Expanation:
</strong>The grid is-
0 <span style="color: #000080;">1 1 1</span> 0 0 0
0 0 <span style="color: #000080;">1 1</span> 0 <span style="color: #ff0000;">2</span> 0&nbsp;
There are two islands in the grid. One island is marked by '1' and the other by '2'.
</span></pre>
<p><span style="font-size: 14pt;"><strong>Expected Time Complexity:&nbsp;</strong>O(n*m)<br><strong>Expected Space Complexity:&nbsp;</strong>O(n*m)</span></p>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ n, m ≤ 500<br><span style="background-color: #ffffff; font-family: Arial; white-space-collapse: preserve;">grid[i][j] = {'</span>0', '1'}</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Paytm</code>&nbsp;<code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Samsung</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Citrix</code>&nbsp;<code>D-E-Shaw</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Ola Cabs</code>&nbsp;<code>Visa</code>&nbsp;<code>Intuit</code>&nbsp;<code>Google</code>&nbsp;<code>Linkedin</code>&nbsp;<code>Opera</code>&nbsp;<code>One97</code>&nbsp;<code>Streamoid Technologies</code>&nbsp;<code>Informatica</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>DFS</code>&nbsp;<code>Graph</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;