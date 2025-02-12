#include<iostream>
#include<stack>

using namespace std;

bool isValidExp(char *s){
    stack<char> stk;
    for(int i=0;s[i] != '\0';i++){
        char ch = s[i];
        if(ch == '('){
            stk.push(ch);
        }
        else if(ch == ')'){
            if(stk.empty() or stk.top()!='('){
                return false;
            }
            stk.pop();
        }
    }
    return stk.empty();
}
int main(){
    char s[100] = "((())))(())";
    if(isValidExp(s)){
        cout<<"yes";
    }else{
        cout<<"No";
    }
    return 0;
}