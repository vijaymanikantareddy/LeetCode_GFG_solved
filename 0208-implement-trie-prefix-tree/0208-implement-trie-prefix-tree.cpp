class Trie {
public:
    map<string, int> mp;
    Trie() {
        
    }
    
    void insert(string word) {
        mp[word]++;
    }
    
    bool search(string word) {
        return mp.find(word) != mp.end();
    }
    
    bool startsWith(string prefix) {
        int n = prefix.size();
        for(auto it: mp){
            if(n <= it.first.size()){
                if(it.first.substr(0, n) == prefix){
                    return true;
                }
            }
        }
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */