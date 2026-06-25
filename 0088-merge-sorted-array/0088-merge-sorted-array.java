class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] temp = new int[m];
        for(int x=0; x<m; x++) {
            temp[x] = nums1[x];
        }
        int i = m-1, j = n-1, k = m+n-1;
        while(i>=0 && j>=0){
            if(temp[i] > nums2[j]) nums1[k--] = temp[i--];
            else nums1[k--] = nums2[j--];
        }
        while(i>=0) nums1[k--] = temp[i--];
        while(j>=0) nums1[k--] = nums2[j--];
    }
}