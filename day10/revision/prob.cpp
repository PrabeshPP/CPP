#include <iostream>
#include <string>
using namespace std;

int main(){
    string str1;
    string newStr;
    int len;
    int t;
    cin>>str1;
    
    len=str1.length();
    if(len>10){
        t=len-2;
        cout<<to_string(t);
        // newStr=str1[0]+(t.str())+str1[len-1];
        // str1=newStr;
    }
    cout<<str1;
}