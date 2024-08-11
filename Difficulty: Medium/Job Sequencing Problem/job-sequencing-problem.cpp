//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    //Function to find the maximum profit and the number of jobs done.
    static bool fun(Job a, Job b){
        return a.profit > b.profit;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        int pro = 0, cnt = 0;
        int mx = 0;
        for(int i = 0 ; i < n ; i++){
            mx = max(mx, arr[i].dead);
        }
        vector<int> ti(mx+1, -1);
        sort(arr, arr+n, fun);
        for(int i = 0 ; i < n ; i++){
            int id = arr[i].id;
            int d = arr[i].dead;
            int p = arr[i].profit;
            if(ti[d] != -1){
                for(int j = d-1 ; j > 0 ; j--){
                    if(ti[j] == -1){
                        ti[j] = id;
                        cnt++;
                        pro += p;
                        break;
                    }
                }
            }else{
                ti[d] = id;
                cnt++;
                pro += p;
            }
        }
        return {cnt, pro};
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends