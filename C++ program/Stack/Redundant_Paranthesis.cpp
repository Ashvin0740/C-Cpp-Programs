#include<iostream>
#include<string>
#include<stack>

using namespace std;
bool checkRedundant(string str){
	stack<char> s;
	for(char ch: str){
		if(ch!=')'){
			s.push(ch);
		}else{
			bool operator_found = false;

			while(!s.empty() and s.top() != '('){
				char top = s.top();
				if(top =='+' || top=='-' || top == '*' || top =='/'){
					operator_found = true;
				}
				s.pop();
			}
			s.pop();
			if(operator_found == false){
				return true;
			}
		}
	}
	return false;
}

int main(){
	string str = "((a+b)+c) + (d+e)";
	if(checkRedundant(str)){
		cout<<"contins redundant parenthesis";
	}
	else{
		cout<<"don't contins redundant parenthesis";
	}
	return 0;
}