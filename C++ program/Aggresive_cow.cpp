class Solution {
public:
  bool isvalid(vector<int>& arr,int c,int m)
{
	int cnt=1;
	int left=0;
	for(int i=0;i<arr.size();i++)
	{
		if(arr[i]-arr[left]>=m)
		{
			left=i;
			cnt++;
		}
	}
	return (cnt>=c);
}
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
		int l=0;
		int h=position[position.size()-1];
		int res=-1;
		while(l<=h)
		{
			int mid=l+(h-l)/2;
			if(isvalid(position,m,mid))
			{
				res=mid;
				l=mid+1;
			}
			else
			h=mid-1;
		}
		return res;
    }
};
