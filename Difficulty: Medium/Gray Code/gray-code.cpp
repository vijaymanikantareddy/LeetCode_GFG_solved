class Solution {
  public:
    vector<string> graycode(int n) {
        // code here
        if(n == 1){
            return {"0", "1"};
        }
        vector<string> smaller = graycode(n - 1);
        vector<string> gray;
        for(int i = 0 ; i < smaller.size() ; i++){
            gray.push_back("0" + smaller[i]);
        }
        for(int i = smaller.size()-1 ; i >= 0 ; i--){
            gray.push_back("1" + smaller[i]);
        }
        return gray;
    }
};