class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int balance = 0;
        int deficit = 0;

        int start = 0;
        for(int index = 0; index < gas.size(); index++) {
            balance = balance + gas[index] - cost[index];

            if(balance<0) {
                deficit = deficit + abs(balance);
                start = index + 1;
                balance = 0;
            }
        }

        if(balance - deficit >= 0) {
            return start;
        }

        else {
            return -1;
        }
    }
};