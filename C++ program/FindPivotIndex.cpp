class Solution {
public:
    int pivotIndex(vector<int>& nums) {
int sum=0;
for(int i=0;i<nums.size();i++){
    sum+=nums[i];
}
int leftsum=0;
int rightsum=sum;

    for(int i=0;i<nums.size();i++){
        rightsum=rightsum-nums[i];
        
        if(rightsum==leftsum){
            return i;
        }
        else{
            leftsum=leftsum+nums[i];
        }
    }
    return -1;
    
}
};