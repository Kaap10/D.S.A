class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0;
        int ten = 0;

        for(int bill : bills) {
            if(bill==5) {
                five++;
            }

            if(bill==10) {
                if(five==0) return false;
                five--;
                ten++;
            }

            if(bill==20) {
                if(five>0 && ten>0) {
                    ten--;
                    five--;
                } else if(five >=3) {
                    five =  five-3;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};