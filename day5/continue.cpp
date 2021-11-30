#include<iostream>
using namespace std;

int main(){
    for (int i=1;i<=7;++i){
        if(i==2 || i==6){
            continue; // continue statement
        }
    cout<<i<<endl;
    }
    int num=0;
    int sum=0;

    while(num>=0){
        sum =sum+num;
        cout<<"Enter the Number:";
        cin>>num;
        
        if(num>60){
            
            cout<<"Number should be less than 60"<<endl;
            num=0;
            continue;
        }
         
     }

    cout<<"total sum of enter number is:"<<sum
    <<endl;

}