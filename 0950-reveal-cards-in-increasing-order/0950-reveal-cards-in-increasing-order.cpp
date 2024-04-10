class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.rbegin(),deck.rend());//reverse sorting
        int n=deck.size();
        deque<int> reveal;
        reveal.push_front(deck[0]);
        for(int i=1;i<n;i++){
            //Simluate the same steps but first step-2 and then step-1
            int back=reveal.back();
            // Step-2
            reveal.pop_back();
            reveal.push_front(back);
            // Step-1
            reveal.push_front(deck[i]);
        }
        return vector<int>(reveal.begin(), reveal.end());
    }
};