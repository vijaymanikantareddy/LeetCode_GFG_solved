# Sorted insert for circular linked list
## Easy
<div class="problems_problem_content__Xm_eO"><p style="text-align:justify"><span style="font-size:18px">Given a sorted circular linked list, the task is to insert a new node in this circular list so that it remains a sorted circular linked list.</span></p>

<p style="text-align:justify"><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre style="text-align:justify"><span style="font-size:18px"><strong>Input:
</strong>LinkedList = 1-&gt;2-&gt;4
(the first and last node is connected,
i.e. 4 --&gt; 1)
data = 2
<strong>Output: </strong>1 2 2 4<strong>
</strong></span></pre>

<p style="text-align:justify"><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre style="text-align:justify"><span style="font-size:18px"><strong>Input:
</strong>LinkedList = 1-&gt;4-&gt;7-&gt;9
(the first and last node is connected,
i.e. 9 --&gt; 1)
data = 5
<strong>Output: </strong>1 4 5 7 9</span>
</pre>

<p style="text-align:justify"><span style="font-size:18px"><strong>Your Task:</strong><br>
The task is to complete the function&nbsp;<strong>sortedInsert</strong>() which should insert the new node into the given circular linked list and return the head of the linkedlist.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong>&nbsp;O(N)<br>
<strong>Expected Auxiliary Space:</strong>&nbsp;O(1)</span></p>

<p style="text-align:justify"><span style="font-size:18px"><strong>Constraints:</strong><br>
0 &lt;= N &lt;= 10<sup>5</sup></span></p>
</div>