class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = -1;
        for(int i=0; i<word.length(); i++) {
            if(word[i]==ch) {
                index = i;
                break;
            }
        }
        int start = 0;
        int end = index;

        while(start<=end) {
            swap(word[start], word[end]);
            start++;
            end--;
        }
        return word;
    }
};