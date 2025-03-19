<h2><a href="https://www.geeksforgeeks.org/problems/meeting-rooms-iii/1?page=2&category=Heap&difficulty=Easy,Medium,Hard&status=unsolved&sortBy=submissions">Meeting Rooms III</a></h2><h3>Difficulty Level : Difficulty: Hard</h3><hr><div class="problems_problem_content__Xm_eO"><p>You are given an integer <strong>n</strong> representing the number of rooms numbered from <strong>0</strong> to <strong>n - 1</strong>. Additionally, you are given a 2D integer array <strong>meetings[][]</strong> where <strong>meetings[i]</strong> = <strong>[start<sub>i</sub>, end<sub>i</sub>]</strong> indicates that a meeting is scheduled during the half-closed time interval <strong>[start<sub>i</sub>, end<sub>i</sub>)</strong>. All start<sub>i</sub> values are unique.</p>
<p>Meeting Allocation Rules:</p>
<ul>
<li>When a meeting starts, assign it to the available room with the smallest number.</li>
<li>If no rooms are free, delay the meeting until the earliest room becomes available. The delayed meeting retains its original duration.</li>
<li>When a room becomes free, assign it to the delayed meeting with the earliest original start time.</li>
</ul>
<p>Determine the room number that hosts the most meetings. If multiple rooms have the same highest number of meetings, return the smallest room number among them.</p>
<p><strong>Examples:</strong></p>
<pre><strong>Input: </strong>n = 2, meetings[][] = [[0, 6], [2, 3], [3, 7], [4, 8], [6, 8]]<strong>
Output:</strong> 1<strong>
Explanation:
</strong>Time 0: Both rooms available. [0,6] starts in room 0.
Time 2: Room 0 busy until 6. Room 1 available. [2,3] starts in room 1.
Time 3: Room 1 frees up. [3,7] starts in room 1.
Time 4: Both rooms busy. [4,8] is delayed.
Time 6: Room 0 frees up. Delayed [4,8] starts in room 0 [6,10).
Time 6: [6,8] arrives but both rooms busy. It’s delayed.
Time 7: Room 1 frees up. Delayed [6,8] starts in room 1 [7,9).<br><br>Meeting counts: [2, 3]</pre>
<pre><strong>Input: </strong>n = 4, meetings[][] = [[0, 8], [1, 4], [3, 4], [2, 3]<strong>
Output: </strong>2<strong>
Explanation:
</strong>Time 0: All rooms available. [0,8] starts in room 0.
Time 1: Room 0 busy until 8. Rooms 1, 2, 3 available. [1,4] starts in room 1.
Time 2: Rooms 0 and 1 busy. Rooms 2, 3 available. [2,3] starts in room 2.
Time 3: Room 2 frees up. [3,4] starts in room 2.<br>
Meeting counts: [1, 1, 2, 0]</pre>
<p><strong>Constraints:</strong></p>
<ul>
<li>1 &lt;= n &lt;= 10<sup>4</sup></li>
<li>1 &lt;= meetings.size() &lt;= 10<sup>4</sup></li>
<li>meetings[i].size() == 2</li>
<li>0 &lt;= start<sub>i&nbsp;</sub>&lt; end<sub>i&nbsp;</sub>&lt;= 10<sup>4</sup></li>
</ul></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Heap</code>&nbsp;<code>Data Structures</code>&nbsp;<code>priority-queue</code>&nbsp;