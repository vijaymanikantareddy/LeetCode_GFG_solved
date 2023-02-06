# Remove character
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">Given two strings string1 and string2, remove those characters from first string(string1) which are present in second string(string2). Both the strings are different and contain only lowercase characters.</span><br>
<strong><span style="font-size:18px">NOTE: </span></strong><span style="font-size:18px">Size of&nbsp;</span><strong><span style="font-size:18px">&nbsp;</span></strong><span style="font-size:18px">first string&nbsp;is always greater than the size of&nbsp;</span><strong><span style="font-size:18px">&nbsp;</span></strong><span style="font-size:18px">second&nbsp;string(&nbsp;|string1| &gt; |string2|).</span><br>
&nbsp;</p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong><strong>string1</strong> = "computer"
<strong>string2</strong> = "cat"
<strong>Output:</strong> "ompuer"
<strong>Explanation: </strong>After removing characters(c, a, t)
from string1 we get "ompuer"</span><span style="font-size:18px">.</span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong><strong>string1</strong> = "occurrence</span><span style="font-size:18px">"
<strong>string2</strong> = "car"
<strong>Output:</strong> "ouene"
<strong>Explanation: </strong>After removing characters
(c, a, r) from string1 we get "ouene"</span><span style="font-size:18px">.</span></pre>

<p>&nbsp;</p>

<p><span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>removeChars()</strong><strong>&nbsp;</strong>which takes string1 and string2&nbsp;as input parameter and returns the result string after removing characters from string2&nbsp; from string1</span><span style="font-size:18px">.</span></p>

<p><br>
<span style="font-size:18px"><strong>Expected Time Complexity:</strong>O( |String1|&nbsp;+ |String2| )<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(K),Where K = Constant&nbsp; &nbsp;</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= |String1| , |String2|&nbsp;&lt;= 50</span></p>
</div>