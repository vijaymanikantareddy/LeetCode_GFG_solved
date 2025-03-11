<h2><a href="https://www.geeksforgeeks.org/problems/kth-largest-element-in-a-stream2220/1?page=1&category=Heap&difficulty=Easy,Medium,Hard&status=unsolved&sortBy=latest">Kth Largest in a Stream</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given an input stream <strong>arr[] </strong>of <strong>n</strong> integers. Find the <strong>K</strong><sup>th</sup> largest element (not <strong>K</strong><sup>th</sup> largest unique element) after insertion of each element in the stream and if the <strong>K<sup>th</sup></strong> largest element doesn't exist, the answer will be -1 for that insertion.&nbsp; return a list of size n after all insertions.</span></p>
<p><span style="font-size: 18px;"><strong>Example 1:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;"><strong>k = </strong>4, <strong>n = </strong>6</span>
<span style="font-size: 18px;"><strong>arr[] = </strong>{1, 2, 3, 4, 5, 6}</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">-1 -1 -1 1 2 3</span>
<span style="font-size: 18px;"><strong>Explanation:</strong></span>
<span style="font-size: 18px;">k = 4
For 1, the 4th largest element doesn't
exist so answer will be -1.
For 2, the 4th largest element doesn't
exist so answer will be -1.
For 3, the 4th largest element doesn't
exist so answer will be -1.
For 4, the 4th largest element is 1.
For 5, the 4th largest element is 2.
for 6, the 4th largest element is 3.</span></pre>
<p><span style="font-size: 18px;"><strong>Example 2:</strong></span></p>
<pre><span style="font-size: 18px;"><strong>Input:</strong></span>
<span style="font-size: 18px;"><strong>k = </strong>1, <strong>n = </strong>2</span>
<span style="font-size: 18px;"><strong>arr[] = </strong>{3, 4}</span>
<span style="font-size: 18px;"><strong>Output:</strong></span>
<span style="font-size: 18px;">3 4 
<strong>Explanation:</strong> 
For the 1st and 2nd element the 1st largest 
element is itself.</span></pre>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Your Task:</strong><br>You don't need to read input or print anything. Your task is to complete the function <strong>kthLargest()</strong> which takes 2 Integers k, and n and also an array arr[] of size n as input. A</span><span style="font-size: 18px;">fter the insertion of each element find <strong>K<sup>th</sup></strong> largest&nbsp;element in the stream and if the </span><strong style="font-size: 18px;">K<sup>th</sup></strong><span style="font-size: 18px;"> element doesn't exist, the answer will be -1 for that insertion.&nbsp; return a list of size n after all insertions.</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Expected Time Complexity:</strong> O(nlogk)<br><strong>Expected Auxiliary Space:</strong> O(n)</span></p>
<p>&nbsp;</p>
<p><span style="font-size: 18px;"><strong>Constraints:</strong></span><br><span style="font-size: 18px;">1 ≤ k ≤ n ≤ 10<sup>5</sup><br>1 ≤ arr[i] ≤ 10<sup>5</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Hike</code>&nbsp;<code>Walmart</code>&nbsp;<code>Cisco</code>&nbsp;<code>Adobe</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Heap</code>&nbsp;<code>Data Structures</code>&nbsp;