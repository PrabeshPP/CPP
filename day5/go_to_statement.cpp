# include <iostream>

using namespace std;
int main(){
    float num,average,sum=0.0;
    int n,i;
    cout<<"Enter the total number of inputs:";
    cin>>n;


    for (int i=1;i<=n;++i){
        cout<<"Enter the number:";
        cin>>num;
        if(num<0.0){
            goto jump;
        }
        sum +=num;
    }

    jump:
        average=sum/i;
        cout<<"the average of the total number is:"<<average;

}