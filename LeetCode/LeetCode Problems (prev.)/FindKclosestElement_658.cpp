class Solution {
public:

    vector<int> twoPointerApproach(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int n= arr.size();
        int start =0;
        int end = n-1;

        while(end-start >= k ){ //sortig wrt to diff of a & b
            int a = arr[start]; //start
            int b = arr[end]; //end

            //hmesha bde no vale ko move krenge....        
            if(abs(x-a)<abs(x-b)) {  
                end --;
            }
            else if (abs(x-a)>abs(x-b)) {
                start++;
            }
            else {
                end--;
            }
        }

        for (int i=start; i<=end; i++) { //nearly element of a 
            ans.push_back(arr[i]);
        }
            return vector<int>(arr.begin()+start,arr.begin()+end+1); //return ans

    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        return twoPointerApproach(arr, k, x);
    }
};