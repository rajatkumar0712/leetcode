class Solution {
public:
    long long int sqrtInteger(int n)
    {
        int start_idx=0, end_idx=n;
        long long int mid = start_idx+(end_idx-start_idx)/2;
        int ans = -1;
        while(start_idx<=end_idx)
            {
                if(mid*mid==n)
                    {
                        return mid;
                    }
                else if(mid*mid>n)
                    {
                        end_idx=mid-1;
                    }
                else
                    {   
                        ans = mid;
                        start_idx=mid+1;
                    }
                mid = start_idx+(end_idx-start_idx)/2;
            }
        return ans;
        
    }
    
    int mySqrt(int x) {
       
        return sqrtInteger(x);
    }
};