#include<iostream>
using namespace std;

void display(char*); // function prototype is used
void display(string);

// string object
int main(){
    string str;
    char str1[100];
    cout<<"Enter the string :";
    getline(cin,str); // takes input with and without space
    cout<<"Enter the char string :";
    cin.get(str1,100); 
    cout<<"\n";
    display(str1);// function overloading is used 
    display(str);
   


}
void display(string str){
    cout<<"Entered string is "<<str<<endl;
}
void display(char s[]){
    cout<<"Entered char array is "<<s<<endl;
}