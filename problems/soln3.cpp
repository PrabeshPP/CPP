#include<iostream>
#include<numeric>
using namespace std;

// solution to find how many questions can be solved by three people
void problem(){
    int n;
    cin>>n;
    int arr[3];
    int soln=0;
    int sum=0;
    for (int i=0;i<n;++i){
       
        for (int j=0;j<3;++j){
            cin>>arr[j];
        }
       sum= accumulate(arr,arr+3,sum);
       if(sum>=2){
          soln+=1;
       }
        sum=0;
    }
    
    cout<<soln;
}


int main(){
    problem();
    
}