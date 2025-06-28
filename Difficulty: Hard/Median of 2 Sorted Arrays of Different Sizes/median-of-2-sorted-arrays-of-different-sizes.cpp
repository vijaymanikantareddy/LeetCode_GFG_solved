class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // Your code goes here
        int n = a.size();
        int m = b.size();
        int total = n + m;
        int req = total / 2;
        int curr = 0, prev = 0, i = 0, j = 0, cnt = 0;
        while(i < n && j < m && cnt <= req){
            prev = curr;
            if(a[i] <= b[j]){
                curr = a[i];
                i++;
            }else{
                curr = b[j];
                j++;
            }
            cnt++;
        }
        
        while(i < n && cnt <= req){
            prev = curr;
            curr = a[i];
            i++;
            cnt++;
        }
        
        while(j < m && cnt <= req){
            prev = curr;
            curr = b[j];
            j++;
            cnt++;
        }
        if(total%2 == 0){
            return (double) (curr + prev) / 2.0; 
        }else{
            return curr;
        }
    }
};