class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int> result(n,0);

        bool skip = false; // for fill alternate
        int i = 0; // for deck
        int j = 0; //for result

        sort(begin(deck), end(deck));

        while(i<n) {
            if(result[j] == 0) {
                if(skip == false) {
                    result[j] = deck[i];
                    i++;
                }

                skip=!skip;
            }
            j = (j+1)%n; // for iterating loop, (no out of bounds)
        }
        return result;
    }
};