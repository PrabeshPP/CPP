#include<iostream>
using namespace std;
 int main(){
     int Sum=0;
     int number;
    while (true)
    {
    cout<<"Enter a number:";
    cin >>number;
    if(number<0){
        break; // break statement to break the while loop which is true
    }
     Sum +=number;
    }
    cout<<"Sum total of all positive number is:"<<Sum<<endl;

 }