#include<iostream>
using namespace std;


//Implementation of BinarySearch Algorithm
class BinarySearch{
    private:
        int len;
    public:
        BinarySearch(int _len){
            len=_len;
        }
    

    int search(int arr[],int guessNum){
        int start,mid,end;
        start=0;
        end=len-1;
        mid=(start+end)/2;
        
      
        while(start<=end){
            if(arr[mid]==guessNum){
                return mid;
            }else if(guessNum<arr[mid]){
                end=mid-1;
                mid=(start+end)/2;
            }else{
                start=mid+1;
                mid=(start+end)/2;            
            }
        }
        return -1;


    }
};

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int length=sizeof(arr)/sizeof(arr[0]);
    int guessNumber;
    cout<<"Enter the number to search :";
    cin>>guessNumber;
    BinarySearch binarysearch=BinarySearch(length);
    int point=binarysearch.search(arr,guessNumber);
  
   
    if(point==-1){
        cout<<"There is no such value "<<endl;

    }else{
        cout<<"Your searched number is at "<<point<<"th position"<<endl;
    }



}