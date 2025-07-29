class Solution {
  public:
    vector<int> asciirange(string& s) {
        // code here
        vector<pair<int, int>> vc(26, {static_cast<int>(s.size()), -1});
        for (int i = 0; i < s.size(); i++) {
            int idx = s[i] - 'a';
            vc[idx].first = min(i, vc[idx].first);
            vc[idx].second = max(i, vc[idx].second);
        }
        vector<int> res;
        for (int i = 0; i < 26; i++) {
            if (vc[i].first != s.size() && vc[i].first != vc[i].second) {
                int sum = 0;
                for (int j = vc[i].first + 1; j < vc[i].second; j++) {
                    sum += s[j];
                }
                if(sum != 0)
                    res.push_back(sum);
            }
        }
        return res;
    }
};