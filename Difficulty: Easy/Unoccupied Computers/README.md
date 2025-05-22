<h2><a href="https://www.geeksforgeeks.org/problems/unoccupied-computers-1646661078/1">Unoccupied Computers</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">A cafe has N computers. Several customers come to the cafe to use these computers. A customer will be serviced only if there is any unoccupied computer at the moment the customer visits the cafe. If there is no unoccupied computer, the customer leaves the cafe.&nbsp;</span></p>

<p><span style="font-size:18px">You are given an integer N representing the number of computers in the cafe and a sequence of uppercase letters S. Every letter in S occurs exactly two times. The first occurrence denotes the arrival of a customer and the second occurrence denotes the departure of the same customer if he gets allocated the computer.&nbsp;</span></p>

<p><span style="font-size:18px">You have to find the number of customers that walked away without using a computer.</span></p>

<p><br>
<span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
N = 3
S = GACCBDDBAGEE
<strong>Output: </strong>1
<strong>Explanation:</strong> Only D will not be able to 
get any computer. So the answer is 1.</span></pre>

<p><br>
<span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px">
N = 1
S = ABCBAC
<strong>Output: </strong>2
<strong>Explanation: </strong>B and C will not be able to 
get any computers. So the answer is 2.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:&nbsp;&nbsp;</strong><br>
You don't need to read input or print anything. Your task is to complete the function&nbsp;<strong>solve()</strong>&nbsp;which takes the integer N (the number of computers in the cafe) and the string S (denoting the arrival and departure of a customer)<strong>&nbsp;</strong>as input parameters&nbsp;and returns an integer representing the number of customers that walked away without using a computer.</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(|S|)<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= N &lt;= 26<br>
1 &lt;= |S| &lt;= 52</span></p>

<p><span style="font-size:18px">S consists of uppercase English letters and each letter occurs exactly 2 times.</span></p>
</div>