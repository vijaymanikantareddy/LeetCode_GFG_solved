# Find all pairs with a given sum
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two unsorted arrays <strong>A</strong> of size <strong>N</strong> and <strong>B</strong> of size <strong>M</strong> of distinct elements, the task is to find all pairs from both arrays whose sum is equal to <strong>X</strong>.</span></p>

<p><span style="font-size:18px"><strong>Note:&nbsp;</strong>All pairs should be printed in <strong>increasing </strong>order of u. For eg. for two pairs (u<sub>1</sub>,v<sub>1</sub>) and (u<sub>2</sub>,v<sub>2</sub>), if u<sub>1&nbsp;</sub>&lt; u<sub>2</sub>&nbsp;then<br>
(u<sub>1</sub>,v<sub>1</sub>) should be printed first else second.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
A[] = {1, 2, 4, 5, 7}
B[] = {5, 6, 3, 4, 8} 
X = 9 
<strong>Output: 
</strong>1 8
4 5 
5 4
<strong>Explanation:</strong>
(1, 8), (4, 5), (5, 4) are the
pairs which sum to 9.</span>
</pre>

<div><span style="font-size:18px"><strong>Example 2:</strong></span></div>

<pre><span style="font-size:18px"><strong>Input:</strong>
A[] = {-1, -2, 4, -6, 5, 7}
B[] = {6, 3, 4, 0} 
X = 8 
<strong>Output:</strong>
4 4 
5 3</span>
</pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>allPairs()</strong>&nbsp;which takes the array <strong>A[]</strong>,<strong> B[]</strong>, its size <strong>N </strong>and <strong>M </strong>respectively,<strong> </strong>and<strong> </strong>an integer <strong>X&nbsp;</strong>as inputs and returns the sorted vector pair values of all the pairs u,v&nbsp;where u&nbsp;belongs to array&nbsp;A and v&nbsp;belongs to array B. If no such pair exists return empty vector pair.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(NLog(N))<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N, M&nbsp;≤ 10<sup>6</sup><br>
-10<sup>6</sup> ≤ X, A[i], B[i] ≤ 10<sup>6</sup></span></p>
</div>