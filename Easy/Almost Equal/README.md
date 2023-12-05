<h2><a href="https://practice.geeksforgeeks.org/problems/almost-equal/1?page=1&category=cpp-strings&difficulty=Easy,Medium,Hard&status=unsolved&sortBy=latest">Almost Equal</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two strings <strong>s1</strong> and <strong>s2</strong> consisting of only lowercase characters whose <a href="https://www.geeksforgeeks.org/check-whether-two-strings-are-anagram-of-each-other/"><strong>anagrams </strong></a>are <strong>almost equal</strong>. The task is to count the number of characters which needs to be <strong>edited</strong>(<strong>delete</strong>) to make<strong>&nbsp;s1&nbsp;equal to s2</strong>.</span></p>

<p><span style="font-size:18px"><strong>Example:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
s1 = madame
s2 = madam
<strong>Output:
</strong>1
<strong>Explanation:
</strong>String s1 = madame, string s2 = madam. 
character 'e' in first string needs to 
be deleted to make s1 equal to s2.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
Print the count of characters needed to delete to make s1 and s2&nbsp;equal. Complete the given function.<br>
<br>
<strong>Expected Time Complexity:&nbsp;</strong>O(max(|s1|,|s2|))<br>
<strong>Expected Auxilary Space: </strong>O(|s1| + |s2|)&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= s1, s2 &lt;= 10<sup>4</sup></span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>cpp-strings</code>&nbsp;