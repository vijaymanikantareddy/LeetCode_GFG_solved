class Solution {
public:
    int findmin(vector<int> arr){
        for(int i = 0 ; i < arr.size();  i++){
            if(arr[i] != 0) return i;
        }
        return arr.size();
    }
    string clearStars(string s) {
        map<char, vector<int>> mp;
        vector<int> arr(26, 0);
        for(int i = 0 ; i < s.size() ; i++){
            if(i == 0 && s[i] == '*') continue;
            if(s[i] == '*'){
                int ind = findmin(arr);
                if(ind != 26){
                    arr[ind]--;
                    mp['a'+ind].pop_back();
                }
            }else{
                mp[s[i]].push_back(i);
                arr[s[i]-'a']++;
            }
        }
        vector<pair<int, char>> vc;
        for(auto it: mp){
            for(int i = 0 ; i < it.second.size() ; i++){
                vc.push_back({it.second[i], it.first});
            }
        }
        sort(vc.begin(), vc.end());
        string res = "";
        for(auto it: vc){
            res += it.second;
        }
        return res;
    }
};