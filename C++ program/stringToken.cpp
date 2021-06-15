#include <iostream> 
#include <cstring>

 using namespace std;

 int main(){
     char s[1000] = " there are so many think to do";

     char *str = strtok(s," ,");
     cout << str;

     while (str != NULL ){
         str = strtok(NULL, ",");
         cout << str <<endl;
     }
     return 0;
 }