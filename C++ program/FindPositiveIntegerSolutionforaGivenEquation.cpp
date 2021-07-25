class Solution {
public:
	//main function
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
		//allocating the result
        vector<vector<int>> result;
		
		//we know the low and high
        int low = 1, high = 1e3;
        int templow,temphigh,mid;
        int ans;

		//iterate over the numbers from low to high
        for( ; low <= high ; low++){
			//ans can be again low to high, so assigning temp variables at every iteration
            templow = 1;
            temphigh = high;
                        
			//using binary search
            while(templow <= temphigh) {
				//calculate the mid
                mid = templow + (temphigh-templow)/2;
				//get the ans
                ans = customfunction.f(low,mid);
				
				//if ans is z, add it to the result and break the iterations
                if(ans == z){
                    result.push_back({low,mid});
                    break;
				//if greater than z, reduce the temphigh
                } else if(ans > z){
                    temphigh = mid-1;
				//if lesser than z, increase the templow
                } else
                    templow = mid+1;
            }
        }
        //return the result
        return result;
    }
};