class Solution {
public:
    
    bool isPossible(vector<int> &weights, int days, int mid) {
        int split = 1;
        int currSum = 0;
        for(int i=0; i<weights.size(); i++) {
            currSum += weights[i];
            if(currSum > mid) {
                currSum = weights[i];
                split++;
                if(split > days) {
                    return false;
                }
            }
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int minSum = 0;
        int maxSum = 0;
        for(int i=0; i<weights.size(); i++) {
            minSum = max(minSum, weights[i]);
            maxSum += weights[i];
        }
        
        int left = minSum, right = maxSum;
        int ans = 0;
        while(left <= right) {
            int mid = left + (right-left)/2;
            if(isPossible(weights,days,mid)) {
                ans = mid;
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        return ans;
    }
};