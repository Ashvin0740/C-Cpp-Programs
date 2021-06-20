class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        //firdt code
        // int sum =0;
        // int maxi = INT_MIN;
        // for(int i =0; i<nums.size();i++)
        // {
        //     sum += nums[i];
        //     maxi = max(sum, maxi);
        //     if(sum < 0) sum = 0;
        // }   
        // return maxi;
        
        //second code
            int ms = INT_MIN;
        
            int sum = 0;
        for(int i = 0; i<nums.size();i++){
        sum = sum + nums[i];
         ms = max(sum,ms);
        if(sum < 0) sum = 0;

        }
           return ms;
    }
                    
};