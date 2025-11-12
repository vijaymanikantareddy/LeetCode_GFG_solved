<h2><a href="https://www.geeksforgeeks.org/problems/wildcard-pattern-matching/1">Wildcard Pattern Matching</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO"><p dir="ltr"><span style="font-size: 14pt;">Given two strings&nbsp;<strong><strong>pat&nbsp;</strong></strong>and&nbsp;<strong><strong>txt</strong></strong>&nbsp;which may be of different sizes, You have to return&nbsp;<strong><strong>true</strong></strong>&nbsp;if the wildcard pattern i.e.&nbsp;<strong><strong>pat</strong></strong>,<strong><strong>&nbsp;</strong></strong>matches&nbsp;with&nbsp;<strong><strong>txt</strong></strong>&nbsp;else return&nbsp;<strong><strong>false</strong></strong>.</span></p>
<p dir="ltr"><span style="font-size: 14pt;">The wildcard pattern&nbsp;<strong><strong>pat</strong></strong>&nbsp;can include the characters '<strong><strong>?</strong></strong>' and '<strong><strong>*</strong></strong>'.</span></p>
<ul>
<li value="1"><span style="font-size: 14pt;">'<strong><strong>?</strong></strong>' – matches any single character.</span></li>
<li value="2"><span style="font-size: 14pt;">'<strong><strong>*</strong></strong>' – matches any sequence of characters (including the empty sequence).</span></li>
</ul>
<p dir="ltr"><span style="font-size: 14pt;"><strong><strong>Note:&nbsp;</strong></strong>The matching should cover the entire&nbsp;<strong><strong>txt</strong></strong>&nbsp;(not partial&nbsp;<strong><strong>txt</strong></strong>).</span></p>
<p><span style="font-size: 14pt;"><strong>Examples:</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> txt = "abcde", pat = "a?c*"
<strong>Output:</strong> true
<strong>Explanation: </strong>'?' matches with 'b' and '*' matches with "de".
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input:</strong> txt = "baaabab", pat = "a*ab"
<strong>Output:</strong> false
<strong>Explanation</strong>: </span><span style="font-size: 18.6667px;">The pattern starts with a, but the text starts with b, so the pattern does not match the text.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: txt = "abc", pat = "*"
<strong>Output:</strong> true
<strong>Explanation</strong>: '*' matches with whole text "abc".</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1&nbsp;<span style="font-family: 'Helvetica Neue';">≤</span> txt.size(), pat.size()&nbsp;<span style="font-family: 'Helvetica Neue';">≤ 1</span><span style="font-family: -apple-system, BlinkMacSystemFont, 'Segoe UI', Roboto, Oxygen, Ubuntu, Cantarell, 'Open Sans', 'Helvetica Neue', sans-serif;">00</span></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Zoho</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>Ola Cabs</code>&nbsp;<code>Walmart</code>&nbsp;<code>Google</code>&nbsp;<code>InMobi</code>&nbsp;<code>United Health Group</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Dynamic Programming</code>&nbsp;<code>Algorithms</code>&nbsp;<code>Recursion</code>&nbsp;<code>Strings</code>&nbsp;