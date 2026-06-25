class Solution {
    public int[] concatWithReverse(int[] nums) {
        int[] newArr = new int [nums.length*2];
        int n= nums.length;
        
        for(int i=0;i<n;i++){
            newArr[i] = nums[i];
        }

        int i = 0, j = n-1;
        while(i<j){
            int temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
        for(int k = 0; k < n; k++){
            newArr[n+k] = nums[k];
        }
        return newArr;
    }
}