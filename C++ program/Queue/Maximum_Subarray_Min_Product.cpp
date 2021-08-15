class Solution {
public:
    int maxSumMinProduct(vector<int>& nums) {
        int n=nums.size();
        long long int pref[n];
        long long int suf[n];
		
		//Calculating the prefix sum
        pref[0]=nums[0];
        for(int i=1;i<n;i++){
            pref[i]=pref[i-1]+nums[i];
        }
		
		//Calculating the suffix sum
        suf[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+nums[i];
        }
        int left[n];
        int right[n];
        stack<int> s;
		
		//Calculating the next smaller element on the right side
        s.push(0);
        for(int i=1;i<n;i++){
            if(s.empty()){
                s.push(i);
            }else{
                while(!s.empty()&&nums[s.top()]>nums[i]){
                    right[s.top()]=i;
                    s.pop();
                }
                s.push(i);
            }
        }
        while(!s.empty()){
            right[s.top()]=n;
            s.pop();
        }
		
		//Calculating the next smaller element on the left side
        s.push(n-1);
        for(int i=n-2;i>=0;i--){
            if(s.empty()){
                s.push(i);
            }else{
                while(!s.empty()&&nums[s.top()]>nums[i]){
                    left[s.top()]=i;
                    s.pop();
                }
                s.push(i);
            }
        }
        while(!s.empty()){
            left[s.top()]=-1;
            s.pop();
        }
		
		//Calculating the answer for each of the elements and storing the maximum of them
        long long int ans=0;
        for(int i=0;i<n;i++){
            long long int l=0;
            if(left[i]==-1){
                l=pref[i];
            }else{
                l=pref[i]-pref[left[i]];
            }
            long long int r=0;
            if(right[i]==n){
                r=suf[i];
            }else{
                r=suf[i]-suf[right[i]];
            }
            ans=max(ans,(l+r-nums[i])*nums[i]*1ll);
        }
        
        return ans % 1'000'000'007; 
    }
    
};