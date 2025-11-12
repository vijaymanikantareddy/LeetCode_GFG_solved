class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mp = {
            {'I',1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000} 
        };
        int res = 0;
        int i = 0;
        while(i < s.size()){
            if(s[i] == 'I'){
                if(i + 1 < s.size() && s[i + 1] == 'V'){
                    res += mp[s[i + 1]] - mp[s[i]];
                    i += 2;
                }
                else if(i + 1 < s.size() && s[i + 1] == 'X'){
                    res += mp[s[i + 1]] - mp[s[i]];
                    i += 2;
                }else{
                    res += mp[s[i]];
                    i++;
                }
            }
            else if(s[i] == 'X'){
                if(i + 1 < s.size() && s[i + 1] == 'L'){
                    res += mp[s[i + 1]] - mp[s[i]];
                    i += 2;
                }
                else if(i + 1 < s.size() && s[i + 1] == 'C'){
                    res += mp[s[i + 1]] - mp[s[i]];
                    i += 2;
                }else{
                    res += mp[s[i]];
                    i++;
                }
            }
            else if(s[i] == 'C'){
                if(i + 1 < s.size() && s[i + 1] == 'D'){
                    res += mp[s[i + 1]] - mp[s[i]];
                    i += 2;
                }
                else if(i + 1 < s.size() && s[i + 1] == 'M'){
                    res += mp[s[i + 1]] - mp[s[i]];
                    i += 2;
                }else{
                    res += mp[s[i]];
                    i++;
                }
            }else{
                if(s[i] == 'V') res += mp[s[i]];
                else if(s[i] == 'X') res += mp[s[i]];
                else if(s[i] == 'L') res += mp[s[i]];
                else if(s[i] == 'C') res += mp[s[i]];
                else if(s[i] == 'D') res += mp[s[i]];
                else if(s[i] == 'M') res += mp[s[i]];
                else 
                    res++;
                i++;
            }
        }
        return res;
    }
};