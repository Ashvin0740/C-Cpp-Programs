class Solution {
public:
    vector<vector<int>> res;
    void getPer(vector<int>& nums, int i){
        if(i>= nums.size()){
            res.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int j=i;j<nums.size();j++){
            if(s.find(nums[j]) != s.end()) continue;
                s.insert(nums[j]);
            swap(nums[i], nums[j]);
            getPer(nums,i+1);
            swap(nums[i], nums[j]);

        }    
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        getPer(nums,0);
        return res;
    }
};