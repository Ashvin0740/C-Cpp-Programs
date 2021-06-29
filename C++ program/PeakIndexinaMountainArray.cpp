// using binary search

class Solution {
public:
        int peakIndexInMountainArray(vector<int>& arr) {
            int s = 0,e = arr.size()-1,ans  = 0;
            while(s < e){
                int mid = s + (e-s)/2;
                if(arr[mid] >arr[mid + 1]){
                     ans = mid;
                    e = mid;
                }else{
                    ans =  mid+1;
                    s= mid +1;
                }
            }
       return ans;
    }
};

// using liner search


// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int ans=0 ;
//         int m =INT_MIN;
        
//         for(int i =0; i<arr.size() ;i++) {
//             if(arr[i] > m){
//                 ans = i;
//                 m = arr[i];
//             }
//         }
//         return ans;
        
//     }
// };