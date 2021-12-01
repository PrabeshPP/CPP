#include<iostream>
using namespace std;
 // Program to check whether the given number is prime or not

void prime();

 int main(){
     prime();
 }

 void prime(){
     int number,i,flag=0;
     cout<<"Enter the number:";
     cin>>number;
     for (i=2;i<=(number/2);++i){
         if(number%i==0){
             flag=1;
             break;

         }
         if(flag==1){
             cout<<"The entered number is not prime";
         }else{
             cout<<"The entered number is prime";
         }
     }

 }
