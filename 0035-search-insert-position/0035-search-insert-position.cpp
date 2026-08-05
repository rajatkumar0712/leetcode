class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     int start_idx=0 , end_idx=nums.size()-1;
        int mid = start_idx+(end_idx-start_idx)/2;
        while(start_idx<=end_idx)
            {
                if(nums[mid]==target)
                    {
                        return mid;
                    }
                else if(nums[mid]<target)
                    {
                        start_idx=mid+1;
                    }
                else
                    {
                        end_idx=mid-1;
                    }
                mid = start_idx+(end_idx-start_idx)/2;
            }
       return start_idx;
    }
};