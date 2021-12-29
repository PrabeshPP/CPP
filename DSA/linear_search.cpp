#include<iostream>
using namespace std;

// LinearSearch Algorithm.
class LinearSearch{
    private:
        int length;
    public:
        LinearSearch(int len){
            length=len;
        }

    int searchNUm(int arr[],int guessNum){
        for(int i=0;i<length-1;++i){
            if(arr[i]==guessNum){
                return i;
            }
        }
        return -1;

    }
};

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(arr[0]);
    LinearSearch linearsearch=LinearSearch(len);
    cout<<"Enter the number you want to search :";
    int num;
    cin>> num;
    int poisition=linearsearch.searchNUm(arr,num);
    if(poisition==-1){
        cout<<"Your searched number is not in the array"<<endl;
    }else{
        cout<<"You Searched number is at "<<poisition<<endl;
    }
}