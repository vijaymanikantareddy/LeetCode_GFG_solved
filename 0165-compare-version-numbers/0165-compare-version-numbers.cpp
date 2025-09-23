class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream ss1(version1);
        string token;
        vector<int> a, b;
        while(getline(ss1, token, '.')){
            a.push_back(stoi(token));
        }

        stringstream ss2(version2);
        while(getline(ss2, token, '.')){
            b.push_back(stoi(token));
        }

        int m = a.size(), n = b.size();
        int mx = max(m, n);
        while((int) a.size() < mx) a.push_back(0);
        while((int) b.size() < mx) b.push_back(0);

        for(int i = 0 ; i < mx ; i++){
            if(a[i] < b[i]) return -1;
            if(b[i] < a[i]) return 1;
        }
        return 0;
    }
};