#include <iostream>
using namespace std;
// file has been renamed
int main(){
    // C-string
    char str[]="C++"; //the string would be terminated by a null character(\0)
    cout<<str[0]<<endl;
    /* taking input from the user.
    However,if there is space between the character only the string before space will get print
     */
    char str1[100];
    char str3[100];
    cout<<"Enter the string :";
    cin>>str1;
    cout<<str1;
    cout<<"\n";
    // C++ string to read a line of text
    
    cout<<"Enter the string with space:";
    cin.get(str3,100);
    cout<<"\n";
    cout<<"You entered "<<str3<<"string ";

}