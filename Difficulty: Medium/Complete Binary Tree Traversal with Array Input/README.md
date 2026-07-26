<h2><a href="https://www.geeksforgeeks.org/problems/print-binary-tree-levels-in-sorted-order3241/1">Complete Binary Tree Traversal with Array Input</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><p><span style="font-size: 18px;">Given an integer array <strong>arr[]</strong> representing the nodes of a Complete Binary Tree in level order traversal, return the nodes at each level in sorted ascending order.</span></p>
<p><span style="font-size: 18px;">For every level of the binary tree, sort the values present at that level independently and return the resulting levels as a 2D array, where the i-th row contains the sorted values of the i-th level.</span></p>
<p><span style="font-size: 18px;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 18px;"><strong style="font-size: 18px;">Input: </strong><span style="font-size: 18px;">arr[] = [7, 6, 5, 4, 3, 2, 1]
</span><strong style="font-size: 18px;">Output:</strong><span style="font-size: 18px;"> [[7], [5, 6], [1, 2, 3, 4]]
</span><strong style="font-size: 18px;">Explanation: </strong><span style="font-size: 18px;">The complete binary tree formed from the given level order traversal is:   <br>        <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/929604/Web/Other/blobid2_1781250162.png" width="199" height="128"><br>The nodes at each level after sorting are:
Level 0: [7]
Level 1: [5, 6]
Level 2: [1, 2, 3, 4]<br></span></span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [7, 16, 1, 4, 13]
<strong>Output: </strong>[[7], [1, 16], [4, 13]]
<strong>Explanation: </strong>The complete binary tree formed from the given level order traversal is:      <br>        <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/929604/Web/Other/blobid4_1781250381.png" width="185" height="139"> &nbsp; <br></span><span style="font-size: 14pt;">The nodes at each level after sorting are:
Level 0: [7]
Level 1: [1, 16]
Level 2: [4, 13]</span></pre>
<p><span style="font-size: 18px;"></span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Sorting</code>&nbsp;<code>Queue</code>&nbsp;<code>Tree</code>&nbsp;<code>priority-queue</code>&nbsp;