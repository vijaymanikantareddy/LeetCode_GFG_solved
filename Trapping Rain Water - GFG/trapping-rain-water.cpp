//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        long long res = 0;
        vector<int> leftmax(n);
        vector<int> rightmax(n);
        int mx = 0;
        for(int i = 0 ; i < n ; i++){
            mx = mx > arr[i]? mx: arr[i];
            leftmax[i] = mx;
        }
        
        mx = 0;
        for(int i = n-1 ; i >= 0 ; i--){
            mx = mx > arr[i]? mx : arr[i];
            rightmax[i] = mx;
        }
        
        for(int i = 0 ; i < n ; i++){
            res += (min(rightmax[i], leftmax[i]) - arr[i]);
        }
        
        return res;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends