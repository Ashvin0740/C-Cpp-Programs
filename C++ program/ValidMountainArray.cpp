class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
    int N = arr.size();
    if(N == 1 || N == 2)
        return false; // array length  are morthen 2 then it is an valid mountain
    int i = 0;
    
    while(i + 1 < N & arr[i] < arr[i + 1])
        i++;
        // incressing order
    
    if(i == 0 || i == N - 1)
        return false;        
        // courner case 

    
    while(i + 1 < N && arr[i] > arr[i + 1])
        i++;// decresing order
    
    if(i == N - 1)
        return true;
    return false;

    }
};