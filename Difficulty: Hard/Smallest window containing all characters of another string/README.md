<h2><a href="https://www.geeksforgeeks.org/problems/smallest-window-in-a-string-containing-all-the-characters-of-another-string-1587115621/1">Smallest window containing all characters of another string</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 14pt;">Given two strings <strong>s1</strong> and <strong>s2</strong>. Find the smallest window in the string <strong>s1</strong> consisting of all the characters(<strong>including duplicates</strong>) of the string <strong>s2.</strong> Return "" in case no such window is present. If there are multiple such windows of the same length, return the one with the <strong>least starting index</strong>.<br><strong>Note</strong>: All characters are in lowercase letters.&nbsp;</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s1 = "timetopractice", s2 = "toc"
<strong>Output: "</strong>toprac"<strong>
Explanation: "</strong>toprac" is the smallest substring in which "toc" can be found.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s1 = "zoomlazapzo",<strong> s2 </strong>= "oza"
<strong>Output: "</strong>apzo"<strong>
Explanation: </strong><strong>"</strong>apzo" is the smallest substring in which "oza" can be found.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>s1 = "zoom", s2 = "zooe"
<strong>Output:</strong> ""<strong>
Explanation: </strong>No window is present containing all characters of s2.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:&nbsp;</strong><br>1 ≤ |s1|, |s2| ≤ 10<sup>5<br></sup></span><span style="font-size: 14pt;"><sup>s1,s2 consists of lowercase letters only</sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>MakeMyTrip</code>&nbsp;<code>Google</code>&nbsp;<code>Streamoid Technologies</code>&nbsp;<code>Media.net</code>&nbsp;<code>Atlassian</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>sliding-window</code>&nbsp;<code>Hash</code>&nbsp;<code>Strings</code>&nbsp;<code>Dynamic Programming</code>&nbsp;<code>Data Structures</code>&nbsp;<code>Algorithms</code>&nbsp;