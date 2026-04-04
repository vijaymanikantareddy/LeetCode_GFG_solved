class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        if(encodedText.size() == 0) return "";
        vector<string> mat;
        int m = encodedText.size() / rows;
        string temp = "";
        for(int i = 0 ; i < encodedText.size() ; i++){
            temp.push_back(encodedText[i]);
            if((i + 1) % m == 0){
                mat.push_back(temp);
                temp = "";
            }
        }
        string res = "";
        for(int i = 0 ; i < m ; i++){
            int r = 0, c = i;
            while(r < rows && c < m){
                res.push_back(mat[r][c]);
                r++;
                c++;
            }
        }
        while(res.back() == ' ') res.pop_back();
        return res;
    }
};