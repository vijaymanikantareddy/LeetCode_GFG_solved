class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(int ele: nums){
            v.push_back(to_string(ele));
        }
        for(int i = 0 ; i < v.size() ; i++){
            for(int j = i+1 ; j < v.size() ; j++){
                if(v[i]+v[j] < v[j]+v[i]){
                    string temp = v[i];
                    v[i] = v[j];
                    v[j] = temp;
                }
            }
        }
        string res = "";
        for(string s: v){
            res += s;
        }
        int i = 0;
        for(i = 0; i < res.size() ; i++){
            if(res[i] != '0'){
                break;
            }
        }
        string ans = "";
        for(int ind = i ; ind < res.size() ; ind++){
            ans += res[ind];
        }
        return ans.size()? ans: "0";
    }
};