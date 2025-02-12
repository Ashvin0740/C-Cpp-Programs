class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        if(n ==0 || n== 1){
            return;
        }
        int left = 0, right = 0;
        
        while(right < n){
            if(nums[right] == 0){
                right++;
            }else{
                swap(nums[right], nums[left]);
                left++;
                right++;
            }
        }
    }

};