// class Solution {
// public:
//     int bagOfTokensScore(vector<int>& tokens, int power) {
//         int n = tokens.size();
//         sort(tokens.begin(), tokens.end());

//         int i =0;
//         int j = n-1;
//         int score = 0;

//         int maxScore = 0;
//         while(i<=j) {
//             if(power >= tokens[i]) {
//                 power = power - tokens[i];
//                 score = score+1;
//                 i++;
//                 maxScore = max(maxScore, score);
//             }

//             else if (score >= 1) {
//                 power = power+tokens[i];
//                 score = score-1;
//                 j--;
//             }
//             else {
//                 return maxScore;
//             }
//         }
//         return maxScore;

//     }
// };
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        int n = tokens.size();
        sort(tokens.begin(), tokens.end());
        
        int currScore = 0;
        int maxScore  = 0;
        int i = 0, j = n-1;

        while(i <= j) {
            if(P >= tokens[i]) {
                currScore++;
                maxScore = max(maxScore, currScore);
                P -= tokens[i]; 
                i++;
                
            } else if(currScore >= 1) {
                currScore--;
                P += tokens[j]; 
                j--;
                
            } else {
                return maxScore;
            }
        }
        return maxScore;
    }
};