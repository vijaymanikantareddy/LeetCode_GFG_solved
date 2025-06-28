class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // Your code goes here
        int n = a.size();
        int m = b.size();
        int total = (n + m);
        int req = total / 2;
        int i = 0, j = 0, cnt = 0, prev = 0, curr = 0;
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
            // cout << curr << " ";
        }
        while(i < n && cnt <= req){
            prev = curr;
            curr = a[i++];
            cnt++;
            // cout << curr << " ";
        }
        
        while(j < m && cnt <= req){
            prev = curr;
            curr = b[j++];
            cnt++;
            //  cout << curr << " ";
        }
        
        return (double) (curr + prev) / 2.0;
    }
};