class Solution {
  public:
    static bool fun(int &a, int& b){
	    return to_string(a) + to_string(b) > to_string(b)+ to_string(a);
	}
    string findLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end(), fun);
	    string res = "";
	    for(int s: arr) res += to_string(s);
	    int i = 0;
	    while(i < res.size() && res[i] == '0'){
	        i++;
	    }
	    if(i == res.size()) return "0";
	    string temp = res.substr(i, res.size() - i + 1);
	    return temp;
    }
};