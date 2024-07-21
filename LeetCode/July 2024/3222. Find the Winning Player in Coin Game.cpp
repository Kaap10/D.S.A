class Solution {
public:
    string losingPlayer(int x, int y) {
        int turns = min(x, y / 4);
        
        return (turns % 2 == 0) ? "Bob" : "Alice";
    }
};