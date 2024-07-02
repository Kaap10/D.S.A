class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int pickM = 0; int pickG = 0; int pickP = 0;
        int travelM = 0; int travelG = 0; int travelP = 0;
        int lastM = 0; int lastG = 0; int lastP = 0;

        //calculating Pick time 
        for(int i=0; i<garbage.size(); i++) {
            string str = garbage[i];

            for(auto ch:str) {
                if(ch=='M') {
                    pickM++;
                    lastM = i;
                }

                if(ch=='P') {
                    pickP++;
                    lastP = i;
                }

                if(ch=='G') {
                    pickG++;
                    lastG = i;
                }
            }
        }

        //calculating Travel time
        for(int i=0; i<lastM; i++) {
            travelM = travelM + travel[i];
        }

        for(int i=0; i<lastP; i++) {
            travelP = travelP + travel[i];
        }

        for(int i=0; i<lastG; i++) {
            travelG = travelG + travel[i];
        }

        int finalAns = (pickM + travelM) + (pickP + travelP) + (pickG + travelG);
        return finalAns;
    }
};