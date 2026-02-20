class Solution {
  public:
    static bool fun(string &a, string &b){
	    return a+b > b+a;
	}
    string findLargest(vector<int> &arr) {
        // code here
        vector<string> nums;
        for(auto it: arr){
            nums.push_back(to_string(it));
        }
        sort(nums.begin(), nums.end(), fun);
	    string res = "";
	    for(string s: nums) res += s;
	    int i = 0;
	    while(i < res.size() && res[i] == '0'){
	        i++;
	    }
	    if(i == res.size()) return "0";
	    string temp = res.substr(i, res.size() - i + 1);
	    return temp;        
    }
};