# Print all nodes that don't have sibling
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a Binary Tree of size N, find all the nodes which don't have any sibling. You need to return&nbsp;a list of integers containing all the nodes that don't have a sibling in sorted order.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> Root node can not have a sibling so it cannot be included in our answer.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong>
       37
      /   
    20
    /     
  113 </span>

<span style="font-size: 18px;"><strong>Output: </strong>20 113
<strong>Explanation: </strong>20 and 113 dont have any siblings.</span></pre>
<p><br><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input :</strong>
       1
      / \
     2   3 </span>

<span style="font-size: 18px;"><strong>Output:</strong> -1
<strong>Explanation: </strong>Every node has a sibling.</span></pre>
<p><br><span style="font-size: 18px;"><strong>Your Task: &nbsp;</strong><br>You dont need to read input or print anything. Complete the function<strong> noSibling() </strong>which takes the root of the tree as input parameter and returns a list of integers containing all the nodes that don't have a sibling in sorted order. If all nodes have a sibling, then the returning list should contain only one element -1.</span></p>
<p><br><span style="font-size: 18px;"><strong>Expected Time Complexity: </strong>O(NlogN)<br><strong>Expected Auxiliary Space:</strong> O(Height of the tree)</span></p>
<p><br><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ N ≤ 10^4<br>All nodes have distinct values.</span></p></div>