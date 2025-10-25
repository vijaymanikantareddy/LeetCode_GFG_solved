<h2><a href="https://leetcode.com/problems/lexicographically-smallest-string-after-reverse">4073. Lexicographically Smallest String After Reverse</a></h2><h3>Medium</h3><hr><p>You are given a string <code>s</code> of length <code>n</code> consisting of lowercase English letters.</p>

<p>You must perform <strong>exactly</strong> one operation by choosing any integer <code>k</code> such that <code>1 &lt;= k &lt;= n</code> and either:</p>

<ul>
	<li>reverse the <strong>first</strong> <code>k</code> characters of <code>s</code>, or</li>
	<li>reverse the <strong>last</strong> <code>k</code> characters of <code>s</code>.</li>
</ul>

<p>Return the <strong>lexicographically smallest</strong> string that can be obtained after <strong>exactly</strong> one such operation.</p>

<p>A string <code>a</code> is <strong>lexicographically smaller</strong> than a string <code>b</code> if, at the first position where they differ, <code>a</code> has a letter that appears earlier in the alphabet than the corresponding letter in <code>b</code>. If the first <code>min(a.length, b.length)</code> characters are the same, then the shorter string is considered lexicographically smaller.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;dcab&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;acdb&quot;</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Choose <code>k = 3</code>, reverse the first 3 characters.</li>
	<li>Reverse <code>&quot;dca&quot;</code> to <code>&quot;acd&quot;</code>, resulting string <code>s = &quot;acdb&quot;</code>, which is the lexicographically smallest string achievable.</li>
</ul>
</div>

<p><strong class="example">Example 2:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;abba&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;aabb&quot;</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Choose <code>k = 3</code>, reverse the last 3 characters.</li>
	<li>Reverse <code>&quot;bba&quot;</code> to <code>&quot;abb&quot;</code>, so the resulting string is <code>&quot;aabb&quot;</code>, which is the lexicographically smallest string achievable.</li>
</ul>
</div>

<p><strong class="example">Example 3:</strong></p>

<div class="example-block">
<p><strong>Input:</strong> <span class="example-io">s = &quot;zxy&quot;</span></p>

<p><strong>Output:</strong> <span class="example-io">&quot;xzy&quot;</span></p>

<p><strong>Explanation:</strong></p>

<ul>
	<li>Choose <code>k = 2</code>, reverse the first 2 characters.</li>
	<li>Reverse <code>&quot;zx&quot;</code> to <code>&quot;xz&quot;</code>, so the resulting string is <code>&quot;xzy&quot;</code>, which is the lexicographically smallest string achievable.</li>
</ul>
</div>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n == s.length &lt;= 1000</code></li>
	<li><code>s</code> consists of lowercase English letters.</li>
</ul>
