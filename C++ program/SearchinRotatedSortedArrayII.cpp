class Solution {
public:
    bool search(vector<int>& nums, int target) {
    int lo = 0;
    int hi = nums.size() - 1;
        while(lo <= hi){
            int mid  = lo + (hi - lo)/2;
            
            if(target == nums[mid]) {
                return true;
            }
            if(nums[lo] == nums[mid] and nums[mid] == nums[hi])
            {
                lo++; hi--;
                continue;
            }
            
            if(nums[lo] <= nums[mid])               // left is sorted
            {
                if(nums[lo] <= target and target < nums[mid])
                    hi = mid - 1;
                else
                    lo = mid + 1;
            }
            else                                   // right is sorted
            {
                if(nums[mid] < target and target <= nums[hi])
                    lo = mid + 1;
                else
                    hi = mid - 1;
            }
        }
        return false;
    }
};