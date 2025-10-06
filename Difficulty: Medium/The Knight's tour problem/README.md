<h2><a href="https://www.geeksforgeeks.org/problems/the-knights-tour-problem/1">The Knight's tour problem</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18.6667px;">You are given a <strong>n × n</strong> chessboard with a Knight starting at the top-left corner <strong>(0, 0)</strong>. Your task is to determine a valid <strong>Knight's Tour</strong>, where the Knight visits every square exactly once, following the standard movement rules of a chess Knight.</span></p>
<p><span style="font-size: 18.6667px;">You have to return the order in which <strong>each cell</strong> is visited. If a solution exists, print the sequence of numbers representing the order of visited squares. If no solution is possible, return <strong>-1</strong>.</span></p>
<p><strong><span style="font-size: 18.6667px;">Note:&nbsp;</span></strong><span style="font-size: 18.6667px;">You can return any valid ordering, if it is correct the driver code will print true else it will print false.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: n = 5
<strong>Output: </strong>true
<strong>Explanation</strong>: A possible Knight's Tour in a 5x5 chessboard is given below where Each number represents the step at which the Knight visits that cell, starting from (0, 0) as step 0.<br>[[0, 11, 2, 17, 20],<br> [3, 16, 19, 12, 7],<br> [10, 1, 6, 21, 18],<br> [15, 4, 23, 8, 13], <br> [24, 9, 14, 5, 22]]
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: n = 4
<strong>Output: </strong>true
<strong>Explanation</strong>: For n = 4, it is not possible for a valid Knight's Tour so you have to return -1.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ n ≤ 6<br></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Recursion</code>&nbsp;<code>Backtracking</code>&nbsp;<code>Puzzles</code>&nbsp;