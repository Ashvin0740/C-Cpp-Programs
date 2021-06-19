class Solution {
public:
        
int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {
vector<int> val1, val2, val3, val4;
for (int i = 0; i < arr1.size(); i++){
val1.push_back(i + arr1[i] + arr2[i]);
val2.push_back(i + arr1[i] - arr2[i]);
val3.push_back(i - arr1[i] + arr2[i]);
val4.push_back(i - arr1[i] - arr2[i]);
}
int ans = 0;
ans = max(ans, maxArray(val1) - minArray(val1));
ans = max(ans, maxArray(val2) - minArray(val2));
ans = max(ans, maxArray(val3) - minArray(val3));
ans = max(ans, maxArray(val4) - minArray(val4));
return ans;
}

int maxArray(vector<int>& arr) {
int max = -99999;
for (int i = 0; i < arr.size(); i++) {
if (arr[i] > max) {
max = arr[i];
}
}
return max;
}
int minArray(vector<int>& arr) {
int min = 99999;
for (int i = 0; i < arr.size(); i++) {
if (arr[i] < min) {
min = arr[i];
}
}
return min;
}
};
