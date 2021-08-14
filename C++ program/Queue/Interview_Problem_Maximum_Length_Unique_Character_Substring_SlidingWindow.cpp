#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char a[] = "ashvin";

    int n = strlen(a);
    int curremt_len = 1;
    int max_len = 1;

    int visited[256];

    for(int i =0; i<256; i++){
        visited[i] = -1;
    }
    visited[a[0]] = 0;
    for(int i =1; i<n; i++) {
        int last_occ = visited[a[i]];

        if(last_occ == -1 ||i - curremt_len> last_occ){
            curremt_len += 1;
            max_len = max(max_len, curremt_len);
        }
        else{
            if(curremt_len>max_len){
                max_len = curremt_len;
            }
            curremt_len = i- last_occ;
        }
        visited[a[i]] = i;
    }
            if(curremt_len>max_len){
                max_len = curremt_len;
            }    
            cout<<max_len<<endl;
    return 0;
}