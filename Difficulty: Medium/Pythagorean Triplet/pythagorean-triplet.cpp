class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        map<int, int> mp;
        for(auto it: arr) mp[it * it]++;
        // sort(arr.begin(), arr.end());
        for(int i = 0 ; i < arr.size() ; i++){
            for(int j = i + 1 ; j < arr.size() ; j++){
                int a = arr[i] * arr[i];
                int b = arr[j] * arr[j];
                int na = a + b;
                int nb = abs(a - b);
                if(mp.find(na) != mp.end()) return true;
                if(mp.find(nb) != mp.end()) return true;
            }
        }
        return false;
    }
};