#include<iostream>

using namespace std;
void sub_set(char *in, char *out, int i, int j){
    if(in[i] == '\0'){
        out[j] = '\0';
        cout<< out<< endl;
        return;
    }
    //including the current char
    out[j] = in[i];
    sub_set(in,out,i+1,j+1);
    //exclude the current char
    sub_set(in,out,i+1,j);

}

int main() {
    char input[] = "abc";
    char output[10];
    sub_set(input,output,0,0);
    return 0;
}