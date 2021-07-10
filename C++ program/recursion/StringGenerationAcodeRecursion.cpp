#include<iostream>

using namespace std;
void StringGeneration(char *in ,char *out, int i, int j){
    //base case
    if(in[i] == '\0'){
        out[j] = '\0';
        cout << out << endl; 
        return;
    }
    if(in[i] == 0)
{
                StringGeneration(in,out,i+1,j);
                return;

}
    int digit = in[i] - '0';
    char ch = digit + 'A' - 1;
    out[j] = ch;
    StringGeneration(in,out,i+1,j+1);
    if(in[i+1] != '\0'){
        int seconddigit = in[i+1] - '0';
        int no = digit*10 +seconddigit;
        if(no<=26){
            ch = no + 'A' - 1;
            out[j] = ch;
            StringGeneration(in,out,i+2,j+1);
        }
    }
    return;
}


int main() {
    char a[1000];
    cin >>a;
    char out[1000];
    StringGeneration(a,out,0,0);
    return 0;
}