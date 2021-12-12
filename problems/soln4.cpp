
#include <iostream>
using namespace std;
 
int main(){
  int k=5;
    int arr[8]={10, 9, 8 ,7 ,7 ,7, 5, 5};
    
    // for(int i=0;i<n;++i){
    //     cin>>arr[i];
    // }
    int runnerUP;
    runnerUP=arr[k-1];
    int total=0;
    for(int j=0;j<8;++j){
        if(runnerUP>0 && arr[j]>0){
            if(arr[j]>=runnerUP){
                total=total+1;
            }
        }
    }
    cout<<total;
}