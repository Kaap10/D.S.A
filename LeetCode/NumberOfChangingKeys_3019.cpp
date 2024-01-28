class Solution {
public:
    
    bool solve(char x, char y) {
        int a =x;
        int b=y;
        
        if((a-32)==b || (b+32) == a || a==b) return false;
        else if ((a+32)==b || (b-32)==a || b==a) return false;
        else                        return true;
    }
    
    int countKeyChanges(string s) {
        int count = 0;
        int n = s.size();
        for(int i=0; i<n-1; i++) {
            if(solve(s.at(i), s.at(i+1))) {
                count++;
            }
        }
        return count;
    }
};