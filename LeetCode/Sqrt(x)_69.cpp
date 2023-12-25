class Solution {
public:
    int mySqrt(int x) {
        //Seach space ka concept hai 
        /* for Ex: Dice ko roll krenge toh o/p- 1,2,3,4,5,6 mai se hi aayega */
        //Search space bna rhe hain
        int start=0;
        int end = x;
        long long int mid = start+(end-start)/2; //yahan pe int nhi chlega, code fat jayaega thats why using long long int to increase the size
        int ans = -1;

        while(start <= end) {
            //predicate function -> T/F (kya mid hi toh ans nhi)
            if (mid*mid == x) {
                return mid;
            }
            
            //if mid*mid x se bda hai toh left mai chle jao
            else if( mid*mid > x) {
                end = mid-1;
            }

            //if mid*mid x se chotta hai toh right mai chle jao
            else {
                ans = mid; //right mai ajne se pehle store krvana pdega, ex; 8.2 ka koi int nhi hota hai toh chotte ko store krke, right mai chle jao 
                start = mid+1;
            }

            //mid ko update krdo
            mid = start+(end-start)/2;
        }
        return ans; 
    }
};