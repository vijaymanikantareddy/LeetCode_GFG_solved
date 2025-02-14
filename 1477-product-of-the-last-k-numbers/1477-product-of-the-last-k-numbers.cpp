class ProductOfNumbers {
public:
    vector<int> prefix;
    int size = 0;
    ProductOfNumbers() {
        prefix = {1};
        size = 0;
    }
    
    void add(int num) {
        if(num == 0){
            prefix = {1};
            size = 0;
        }else{
            prefix.push_back(prefix.back() * num);
            size++;
        }
    }
    
    int getProduct(int k) {
        if(k > size) return 0;
        return prefix[size]/prefix[size - k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */