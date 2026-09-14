class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        int x1 = rec1[0], y1 = rec1[1];
        int x2 = rec1[2], y2 = rec1[3];
        int p1 = rec2[0], q1 = rec2[1];
        int p2 = rec2[2], q2 = rec2[3];
        if(q1 >= y2 or y1 >= q2 or p1 >= x2 or x1 >= p2) return false;
        return true;
    }
};