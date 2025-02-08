class NumberContainers {
public:
    unordered_map<int, set<int>> num_inds;
    unordered_map<int, int> ind_num;
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(ind_num.find(index) == ind_num.end()){
            ind_num[index] = number;
            num_inds[number].insert(index);
        }else{
            int prev = ind_num[index];
            ind_num[index] = number;
            num_inds[prev].erase(index);
            if(num_inds[prev].size() == 0){
                num_inds.erase(prev);
            }
            num_inds[number].insert(index);
        }
    }
    
    int find(int number) {
        if(num_inds.find(number) != num_inds.end()){
            if(!num_inds[number].empty()){
                return *num_inds[number].begin();
            }
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */