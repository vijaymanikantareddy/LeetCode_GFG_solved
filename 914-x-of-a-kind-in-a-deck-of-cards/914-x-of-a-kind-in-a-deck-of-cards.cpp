class Solution {
public:
    int gcd(int a, int b){
        while(b){
            if(a>b){
                int temp=a;
                a=b;
                b=temp;
            }
            b=b%a;
        }
        return a;
    }
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int>mp;
        for(int i: deck){
            mp[i]++;
        }
        int res=mp[deck[0]];
        for(auto it: mp){
            res = gcd(res, it.second);
        }
        return res==1? false: true;
    }
};