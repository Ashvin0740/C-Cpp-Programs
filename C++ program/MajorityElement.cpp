class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // //      Boyer-Moore's counting Algo - O(n)

        int n = nums.size();
        int count=0;
        int MajoEle =0;
        for(int i =0; i<n; i++){
            if(count == 0){
                MajoEle = nums[i];
            }
            if(nums[i] == MajoEle){
                count ++;
                
            }else{
                count --;
            }
            
        }
        return MajoEle;
        
    }
};
