
class solution {
    public: 
        vactor<int> sortedSquares(vactor<int> & A)
        {
            vactor<int> res(A.size());
            int l =0;
            int r = A.size()-1;
            int k = A.size()-1;

            while ( k>=0){
                if(abs(A[l]) > abs(A[r])){
                    res[k] = (A[l] *A[l]);
                    k--;
                    l++;
                }else{
                    res[k] = (A[l] *A[l]);
                    k--;
                    r--;
                }
            }

        return res;    
        }  
};