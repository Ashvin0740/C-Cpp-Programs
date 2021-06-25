class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size()-1;
        
        while(lo <= hi) {
            int mid = (lo +hi)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[lo] <= nums[mid]){
                //lo to mid part is sorted
                if(target >=nums[lo] && nums[mid] > target){
                    hi = mid - 1;
                }else{
                    lo = mid +1;
                }
            }
             else if(nums[mid] <= nums[hi]){
                //mid to hi part is sorted
                if(target > nums[mid] && nums[hi] >= target){
                    lo = mid + 1;
                }else{
                    hi = mid - 1;
                }
        }
        }
        return -1;
    }
};