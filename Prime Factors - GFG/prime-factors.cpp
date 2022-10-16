//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
	public:
	vector<int>AllPrimeFactors(int N) {
	    // Code here
	    vector<bool> primes(N, true);
	    primes[0]=primes[1]=false;
	    for(int i=2 ; i*i<=N ; i++){
	        if(primes[i]==false){
	            continue;
	        }
	        for(int j=i*i ; j<=N ; j+=i){
	            primes[j]=false;
	        }
	    }
	    vector<int> res;
	    for(int i=1 ; i*i<=N ; i++){
	        if(N%i==0 and (primes[i] or primes[N/i])){
	            if(primes[i]){
	                res.push_back(i);
	            }
	            if(i!=N/i){
	                if(primes[N/i]){
	                    res.push_back(N/i);
	                }
	            }
	        }
	    }
	    return res;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.AllPrimeFactors(N);
		for(auto i: ans)
			cout << i <<" ";
		cout <<"\n";
	}  
	return 0;
}
// } Driver Code Ends