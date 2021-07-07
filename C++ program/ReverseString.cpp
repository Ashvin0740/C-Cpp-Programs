// using recursion
class Solution {
public:
    void solve(vector<char>& s, int i, int j)
    {
        if(i>=j)
            return ;
        char temp=s[j];
        s[j]=s[i];
        s[i]=temp;
        solve(s,i+1,j-1);
    }
    void reverseString(vector<char>& s) {
        solve(s,0,s.size()-1);
        return ;
    }
};

// // using STL
// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         reverse(s.begin(), s.end());
//     }
// };




//using for loop
// class Solution {
// public:
//     void reverseString(vector<char>& s) {
//         int i =0;
//         int j = s.size()-1;
//         for(int i=0; i<j; i++){
//             swap(s[i],s[j]);
//             j--;
                
//         }
//     }
// };
