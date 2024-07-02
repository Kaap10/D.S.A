class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        int low = 1;
        int high = x;
        
        while(low<=high) {
            long long mid = low + (high-low)/2;
            
            long long val = mid * mid;
            if(val <= x) {
                low = mid + 1;
            }
            
            else {
                high = mid-1;
            }
        }
        
        return high;
        
    }
};