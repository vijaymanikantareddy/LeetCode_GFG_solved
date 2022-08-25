class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[26]={0};
        for(int i=0 ; i<magazine.size() ; i++){
            int d = magazine[i]-97;
            arr[d]++;
        }
        for(int i=0 ; i<ransomNote.size() ; i++){
            int d = ransomNote[i]-97;
            arr[d]--;
            if(arr[d]<0)
                return false;
        }
        return true;
    }
};