// two pointer approach using 
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0; 
        int i = 0; 
        int j = 0; 
        int ans = INT_MAX;
        while(i < nums.size()){
            sum += nums[i];
            while(sum >= target){
                ans = min(ans,  i + 1-j);
                sum -= nums[j++];
            }
            i++;
        }
        if( ans == INT_MAX){
            return 0;
        }else{
            
         return ans;
        }
    }
};

