class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector <vector <int>> ans;
        vector <int> v;
        solution(0,target,candidates,ans,v);
        return ans;
    }
    void solution(int index,int target,vector <int> &candidates,vector <vector <int>> &ans,vector <int> &v){
        if(target==0){
           ans.push_back(v);
            return;
        }
        if(index == candidates.size()){
            return;
        }
        for(int i=index;i<candidates.size();i++){
            if(i>index && candidates[i]==candidates[i-1]) continue;
            if(candidates[i]>target) break;
            v.push_back(candidates[i]);
            solution(i+1,target-candidates[i],candidates,ans,v);
            v.pop_back();
        }
    }
};