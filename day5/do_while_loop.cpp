#include <iostream>
using namespace std;

//intro to do..while loop
int main(){
int number;
int sum=0;
cout<<"Enter the number:";
cin>>number;
while(number>0){
    sum+=number;
    cout<<"Enter the number again:";
    cin>>number;
}
cout<<"The total sum of the number is:"<<sum<<endl;
}