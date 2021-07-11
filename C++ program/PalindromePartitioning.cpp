class Solution {
public:
    void helper(string &s,int idx, vector<vector<string>>& res,vector<string>& curr)
    {
        if(idx>=s.size())
        {
            res.push_back(curr);
            return;
        }
        for(int i =idx;i<s.size();i++)
        {
            if(isvalid(s,idx,i))
            {
                curr.push_back(s.substr(idx,i-idx+1));
                helper(s,i+1,res,curr);
                curr.pop_back();
            }
        }
    }
    bool isvalid(string &s, int low, int high) {
        while (low < high) {
            if (s[low++] != s[high--]) return false;
        }
        return true;
        
    }
        vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> curr;
        helper(s,0,res,curr);
        return res;
    }
};