class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> count(101);
        int maxFreq = 0;

        for(int &num: nums) {
            count[num]++;
            maxFreq = max(maxFreq, count[num]);
        }

        int result = 0;

        for(int i=0; i<101; i++) {
            if(count[i]==maxFreq) {
                result = result + maxFreq;
            }
        }
        return result;
    }
};

//Approach 2 (One pass)
class Solution {
public:
    int maxFrequencyElement(vector<int> &nums) {

        int maxFreq = 0;
        int total = 0;

        for(int &num: nums) {
            Count[num]++;

            int freq = Count[num];

            if(freq>maxFreq) {
                maxFreq = freq;
                total = maxFreq;
            } else if (freq==maxFreq) {
                total = total + maxFreq;
            }
        }
        return total;
    }
};