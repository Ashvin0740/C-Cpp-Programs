class Solution {
public:
    int specialArray(vector<int>& nums) {
        for(int i =1; i<1001;i++){
            int count =0;
            for(auto num:nums){
                if( num >=i )
                    count++;
            }
            if(i == count)
                return i;
        }
        return -1;
    }
};