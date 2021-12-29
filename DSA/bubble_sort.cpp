#include <iostream>
using namespace std;

class BubbleStack{
    private:
        int len;
    public:
        BubbleStack(int _len){
            len=_len;
        }

    void Sort(int arr[]){
        cout<<"Hello world"<<endl;
        for(int i=0;i<len-1;++i){
            for(int j=0;j<len-1;++j){
                int temp;
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;

                }
            }
        }
       for(int i=0;i<len;++i){
           cout<<arr[i]<<',';
       }
    }
};

int main(){
    int arr[]={10,1,6,9,33,3,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    BubbleStack bubbleStack=BubbleStack(len);
    bubbleStack.Sort(arr);
    



}