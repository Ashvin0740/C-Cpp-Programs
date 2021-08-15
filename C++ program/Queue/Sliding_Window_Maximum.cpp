class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
    vector<int> ans;
        int n = a.size();
        deque<int> Q;
    for(int i=0 ;i<n;i++){
        
        //1. Remove the elements which are not the part of the window(Contraction)
        while((!Q.empty() && (Q.front()<=i-k))){
            Q.pop_front();
        }
        
        //2. Remove the elements which are not useful and are in window
        while(!Q.empty() && a[i]>=a[Q.back()]){
            Q.pop_back();   
        }
        Q.push_back(i);
        
        //3. Add the new elements(Expansion)
            if(i>=k-1)ans.push_back(a[Q.front()]); //our max value in O(1)
    }
    
    return ans;
    
        }
};
