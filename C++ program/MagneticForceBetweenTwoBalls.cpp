class Solution {
public:
    
    bool isPossible(vector<int>&A, int mid, int m){
        int initial = 1;
        int prv = A[0];
        
        for(int  i=0; i<A.size(); i++) {
            if(A[i] - prv >= mid){
            prv = A[i];
                initial ++;
                if(initial == m) return true;
            }
            
        }
        if(initial < m) return false;
        return true;
    }
    int maxDistance(vector<int>& A, int m) {
        sort(A.begin(),A.end());
        int lo = 0;
        int hi = A.size();
        int ans = 0;
        while (lo <= hi){
            int mid = lo + (hi-lo)/2;
            
            if(isPossible(A,mid, m)){
                ans = mid;
                lo = mid+1;
            }else{
                hi = mid - 1;
            }
        }
    return ans;
    }
};