class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        next_permutation(s.begin(), s.end());
        long long a = stoll(s);
        if(a <= n || a > INT_MAX) return -1;
        return a;
    }
};