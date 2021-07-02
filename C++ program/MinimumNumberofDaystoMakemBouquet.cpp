class Solution {
    int calling(int mid , vector<int>&bloomDay , int k)
    {
        int i=0;
        int pair=0;
        while(i<=bloomDay.size()-k)
        {
            bool oo =true;
            int j=i;
            while(j<bloomDay.size() && j<k+i)
            {
                if(bloomDay[j]>mid)
                {
                    oo=false;
                    break;
                }
                j++;
            }
            if(oo==true)
            {
                pair++;
                i+=k;
            }
            else
            {
                i=j+1;
            }
        }
        return pair;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l = *min_element(bloomDay.begin(),bloomDay.end());
        int h = *max_element(bloomDay.begin(),bloomDay.end());
        int ans=0;
        while(l<=h)
        {
            int mid = ((h-l)/2)+l;
            if(calling(mid,bloomDay,k)<m)
            {
                l=mid+1;
            }
            else
            {
                ans=mid;
                h=mid-1;
            }
        }
        if(ans==0)
        {
            return -1;
        }
        return ans;
    }
};