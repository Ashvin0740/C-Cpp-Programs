//using XOR

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xorArr =0;
        for(int i:nums){
            xorArr^=i;
        }
     int xorAll = 0;
        for(int i=0; i<=nums.size(); i++){
            xorAll ^=i;
        }
        return xorArr ^ xorAll;
    }
    
};

// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int sumArr =0;
//         for(int i:nums){
//             sumArr += i;
//         }
//         int n = nums.size();
//        int sumAll = n*(n+1)/2;
        
//         return sumAll-sumArr;
//     }
    
// };

