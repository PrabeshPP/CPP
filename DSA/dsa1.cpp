#include<iostream>
using namespace std;

int binarySearch(int arr[],int target,int size){
int start=0;
int end=size;
int mid=(start+end)/2;
while(start<=end){
    if(target==arr[mid]){
        return mid;

    }else{
        if(target<=arr[mid]){
        end=mid-1;
        mid=(start+end)/2;
    }else{
        start=mid+1;
        mid=(start+end)/2;
    }

    }
    

}
return -1;


    

}



int main(){
    int arr[]={2,3,5,9,14,16,18};
    int size=sizeof(arr)/sizeof(arr[0]);
    int ret=binarySearch(arr,9,size);
    cout<<ret;
 
}