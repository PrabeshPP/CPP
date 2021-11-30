#include <iostream>
using namespace std;

//intro to do..while loop
int main(){
// int number;
// int sum=0;
// cout<<"Enter the number:";
// cin>>number;
// while(number>0){
//     sum+=number;
//     cout<<"Enter the number again:";
//     cin>>number;
// }
// cout<<"The total sum of the number is:"<<sum<<endl;


//using do_while lopp
int num2;
int sum_do=0;
cout<<"Enter the number:";
cin>>num2;
do{
sum_do+=num2;
cout<<"Enter the number again:";
cin>>num2;

}while(num2>0);
cout<<"Total sum using do..while loop:"<<sum_do<<endl;
}