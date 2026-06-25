class Solution {
    public boolean isPalindrome(int x) {
        long r = 0;
        int original = x;
        while(x != 0){
            r = r + (x % 10);
            r = r * 10;
            x = x/10;
        }
        r = r / 10;
        if(original < 0){
            return false;
        }
        if(original == (int) r){
            return true;
        }
        
        else{
            return false;
        }
    }
}