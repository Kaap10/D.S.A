class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int n = customers.size();

        double totalWaitTime = 0;
        int currentTime = 0;

        for(auto &vec : customers) {
            int arrivalTime = vec[0];
            int cookTime = vec[1];

            if(currentTime < arrivalTime) {
                currentTime = arrivalTime;
            }

            int waitTime = currentTime + cookTime - arrivalTime;

            totalWaitTime += waitTime;

            currentTime += cookTime;
        }

        return totalWaitTime/n;
    }
};