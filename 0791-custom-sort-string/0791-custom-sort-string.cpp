class Solution {
public:
    string customSortString(string order, string s) {
         int arr[26] = {0};
        for(int i = 0 ; i < s.size() ; i++){
            char ch = s[i];
            int d = ch-'a';
            arr[d]++;
        }
        string res = "";
        for(int i = 0 ; i < order.size() ; i++){
            int ind = order[i]-'a';
            for(int j = 0 ; j < arr[ind] ; j++){
                res += ('a'+ind);
            }
            arr[ind] = 0;
        }

        for(int i = 0 ; i < 26 ; i++){
            if(arr[i] > 0){
                for(int j = 0 ; j < arr[i] ; j++){
                    res += (i+'a');
                }
                arr[i] = 0;
            }
        }
        return res;
    }
};