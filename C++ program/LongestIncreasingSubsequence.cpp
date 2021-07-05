class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

        // this will store LIS
        vector<int> lis;
        for(int &num: nums) {
            // check where this number should be placed in LIS
            auto pos = lower_bound(lis.begin(), lis.end(), num);
            // if belongs to the last pos
            if(pos == lis.end())
                lis.emplace_back(num);
            // if there are numbers more than current, then we can just make
            // the first bigger number replaced with current so that if later
            // there are numbers just bigger than current they can contribute to LIS
            else
                *pos = num;
        }
        
        return lis.size();
    }
};
