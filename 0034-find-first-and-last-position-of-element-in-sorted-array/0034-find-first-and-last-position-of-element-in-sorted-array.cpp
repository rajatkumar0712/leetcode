class Solution {
public:
    int firstOcc(vector<int>& nums,int target)
    {
        int start_idx=0, end_idx = nums.size() - 1;
        int mid_idx = start_idx+(end_idx-start_idx)/2;
        int ans = -1;
        while(start_idx<=end_idx)
        {
            if(nums[mid_idx]==target)
                {
                    ans = mid_idx;
                    end_idx=mid_idx-1;
                }
            else if(nums[mid_idx]>target)    
                {
                    end_idx=mid_idx-1;
                }
            else
                {
                    start_idx=mid_idx+1;
                }
            mid_idx=start_idx+(end_idx-start_idx)/2;
        }
        return ans;
    }
    int lastOcc(vector<int>& nums,int target)
    {
        int start_idx=0, end_idx = nums.size() - 1;
        int mid_idx = start_idx+(end_idx-start_idx)/2;
        int ans = -1;
        while(start_idx<=end_idx)
            {
                if(nums[mid_idx]==target)
                    {
                        ans = mid_idx;
                        start_idx=mid_idx+1;
                    }
                else if(nums[mid_idx]>target)    
                    {
                        end_idx=mid_idx-1;
                    }
                else
                    {
                        start_idx=mid_idx+1;
                    }
            mid_idx=start_idx+(end_idx-start_idx)/2;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums,int target) {
       return {firstOcc(nums,target),lastOcc(nums,target)};
    }
};