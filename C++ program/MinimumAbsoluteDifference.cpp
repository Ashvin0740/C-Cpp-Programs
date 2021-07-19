class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
                sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        int min=INT_MAX;
            for(int i=0;i<arr.size()-1;i++){
                if(min>(arr[i+1]-arr[i])){
                    ans.clear();
                    ans.push_back({arr[i],arr[i+1]});
                    min=arr[i+1]-arr[i];
                    }
                else if(min==(arr[i+1]-arr[i]))
                    {
                    ans.push_back({arr[i],arr[i+1]});
                        }
                }
        return ans;
    }
};
