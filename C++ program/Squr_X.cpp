class Solution {
public:
int mySqrt(long long int x) {
       long long int left=0,right=x+1;
        while(left<right){
            long long int mid = left+(right-left)/2;
            if(mid*mid<=x)
                left=mid+1;
            else right=mid;
        }
        return left-1;
    }
};