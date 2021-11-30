#include<iostream>
using namespace std;
 int main(){
     int sum=0;
    for (int i=0;i<=10;++i){
           sum+=i;    //sum of first 10 natural numbers
        
    }
    cout<<sum<<endl;
    //Ranged based for loop

    int num_array[]={1,2,3,4,5,6,7,8,9};
    for (int n:num_array){
        cout<<n<<""<<endl;
    }

    
 }