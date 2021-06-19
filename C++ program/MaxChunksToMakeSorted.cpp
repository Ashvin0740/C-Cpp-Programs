class Solution {
public:
    int maxChunksToSorted(vector<int>& a) 
    {
        int n=a.size();
        int chunks = 0;
        int maxi = 0;
        for(int i=0;i<n;i++)
        {
            maxi =max(maxi,a[i]);
            if(i==maxi)
            {
                chunks++;
            }
        }
        return chunks;
    }
};