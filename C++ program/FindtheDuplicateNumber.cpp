// my code 43 / 58 test cases passed.

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int n = nums.size();
//         for(int i =0; i<n;i++){
//             if(nums[i] == nums[i+1]){
//                 return nums[i];
//             }
//         }
//         return 0;
//     }
// };
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
   
        int lo = 1, hi = nums.size() - 1;
        while(lo < hi) {
            int mid = lo + (hi - lo) / 2;
            
            // count the number of elements smaller/ equal than middle element
            int c = 0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]<=mid)
                    c++;
            }
            if(c > mid)
                hi = mid;
            else
                lo = mid + 1;
        }
        return lo;
    }
};

