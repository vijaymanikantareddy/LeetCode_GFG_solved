# Lucky alive person in a circle
## Medium
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given <strong>N</strong> people standing in a circle where <strong>1<sup>st</sup></strong>&nbsp;is having a sword, find the luckiest person in the circle, if, from 1<sup>st</sup>&nbsp;soldier who is having a sword each has to kill the next soldier and handover the sword to next soldier, in turn, the soldier will kill the adjacent soldier and handover the sword to next soldier such that one soldier remains in this war who is not killed by anyone.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 5
<strong>Output:</strong>
3
<strong>Explanation:</strong>
In first go 1 3 5 (remains) 
as 2 and 4 killed by 1 and 3. 
In second go 3 will remain 
as 5 killed 1 and 3rd killed 5 
hence, 3 remains alive.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 10
<strong>Output:</strong>
5
<strong>Explanation:</strong>
In first 1 3 5 7 9 
remains&nbsp;as 2 4 6 8 10 
were killed by 1 3 5 7 
and 9. In second 1 5 9 
are left as 1 kills 3 
and &nbsp;5 kill the 7th 
soldier.In third 5th 
soldiers remain alive as 
9 kills the 1st soldier and 
5 kill the 9th soldier.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function <strong>find()</strong>&nbsp;which takes an integer N as input parameter&nbsp;and returns the output as the soldier who was lucky in the game.</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity: </strong>O(log N)<br>
<strong>Expected Space Complexity: </strong>O(1)</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1&lt;=N&lt;=10<sup>8</sup></span></p>
</div>