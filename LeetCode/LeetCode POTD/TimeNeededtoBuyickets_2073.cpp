class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int timeNeeded = 0;
        int n = tickets.size();

        for(int i=0; i<n; i++) {
            if(i<=k) {
                timeNeeded = timeNeeded + min(tickets[k], tickets[i]);
            }

            else {
                timeNeeded = timeNeeded + min(tickets[k]-1, tickets[i]);
            }
        }
        return timeNeeded;
    }
};