class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for (int ans : arr) {
            if (ans <= k) k++;
        }
        return k;
    }
};