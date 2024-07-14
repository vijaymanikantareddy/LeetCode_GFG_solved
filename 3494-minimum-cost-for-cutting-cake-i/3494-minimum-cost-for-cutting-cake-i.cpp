using ll = long long;
class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        vector<pair<ll,bool>> v;
        for(int cost: horizontalCut){
            v.push_back({cost, true});
        }
        for(int cost: verticalCut){
            v.push_back({cost, false});
        }
        sort(v.rbegin(), v.rend());

        ll hor = 1, ver = 1, res = 0;
        for(auto cut:v){
            if(cut.second){
                res += (ll)cut.first*ver;
                hor++;
            }
            else{
                res += (ll)cut.first*hor;
                ver++;
            }
        }
        return res;
    }
};