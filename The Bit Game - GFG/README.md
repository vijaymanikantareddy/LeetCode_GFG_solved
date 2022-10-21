# The Bit Game
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Two players, Player 1 and Player 2, are given an integer N to play a game. The rules of the game are as follows :<br>
1. In one turn, a player can <strong>remove&nbsp;any set&nbsp;bit</strong>&nbsp;of N in its binary representation to make a new N.<br>
2. Player 1 always takes first turn.<br>
3. If a player cannot make a move, he loses.</span></p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">N = 8</span>
<span style="font-size:18px"><strong>Output:</strong></span>
<span style="font-size:18px">1</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">N = 8
N = 1000 (binary)
Player 1 takes the bit</span><span style="font-size:18px">.
The remaining bits are all zero.
Player 2 cannot make a move, </span>
<span style="font-size:18px">so Player 1 wins.</span></pre>

<p>&nbsp;</p>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><strong><span style="font-size:18px">Input:</span></strong>
<span style="font-size:18px">N = 1</span>
<strong><span style="font-size:18px">Output:</span></strong>
<span style="font-size:18px">1</span>
<strong><span style="font-size:18px">Explanation:</span></strong>
<span style="font-size:18px">N = 0001
Player 1 takes one in one </span>
<span style="font-size:18px">move, so Player 2 loses.</span></pre>

<p>&nbsp;</p>

<p><strong><span style="font-size:18px">Your Task:</span></strong></p>

<p><span style="font-size:18px">You don't need to read input or print anything. Your task is to complete the function swapBitGame() which takes an integer N and returns&nbsp;"1" if Player 1 wins, else return "2".</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(log(N))<br>
<strong>Expected Auxiliary Space:</strong> O(1)</span></p>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Constraints :&nbsp;</strong><br>
1 &lt;= N &lt;= 10^12</span></p>

<p>&nbsp;</p>
</div>