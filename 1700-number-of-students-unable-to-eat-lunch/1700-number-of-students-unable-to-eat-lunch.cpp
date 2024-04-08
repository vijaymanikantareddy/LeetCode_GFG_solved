class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        unordered_map<int, int> mp;
        for(auto it: students){
            q.push(it);
        }
        int count = 0, i = 0;
        while(q.size() > 0 && count != q.size()){
            if(q.front() == sandwiches[i]){
                q.pop();
                i++;
                count = 0;
            }else{
                q.push(q.front());
                q.pop();
                count++;
            }
        }
        return q.size();
    }
};