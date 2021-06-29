class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        //in the given problem  divide the number of digit in to 2 part. then put first number from the first part and second element on tne secong part then continue till the end
        
//         //first method
//         vector<int> ans;
//         int i = 0;
//         int j = n;
//         while(j < n * 2){
//             ans.push_back(nums[i++]);
//             ans.push_back(nums[j++]);

//         }
//         return ans;
        
 // second method       
        int j = n;
        for(int i =0; i<n; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            j++;
        }
            
        return ans;
    }
};