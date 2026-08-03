class Solution {
public:
    int peakindex(vector<int>& arr)
    {   
        int start_idx = 0, end_idx = arr.size()-1;
        int mid_idx = start_idx+(end_idx-start_idx)/2;

        while(start_idx<end_idx)
            {
                if(arr[mid_idx]<arr[mid_idx+1])
                    {
                        start_idx=mid_idx+1;
                    }
                else 
                    {
                        end_idx=mid_idx;
                    }
                mid_idx=start_idx+(end_idx-start_idx)/2;
            }
        return start_idx;
    }
    int peakIndexInMountainArray(vector<int>& arr) {
        return peakindex(arr);
    }
};