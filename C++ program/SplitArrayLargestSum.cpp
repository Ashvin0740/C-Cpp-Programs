class Solution {
public:
    
    bool isPossible(vector<int> &nums, int m, int maxSum) {
        int split = 1;
        int currSum = 0;
        for(int i=0; i<nums.size(); i++) {
            currSum += nums[i];
            if(currSum > maxSum) {
                currSum = nums[i];
                split++;
                if(split > m) {
                    return false;
                }
            }
        }
        return true;
    }
    
    int splitArray(vector<int>& nums, int m) {
        int minSum = 0;
        int maxSum = 0;
        for(int i=0; i<nums.size(); i++) {
            minSum = max(minSum, nums[i]);
            maxSum += nums[i];
        }
        
        int left = minSum, right = maxSum;
        int ans = left;
        while(left <= right) {
            int mid = left + (right-left)/2;
            if(isPossible(nums,m,mid)) {
                ans = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return ans;
    }
};