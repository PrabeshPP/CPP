# include <iostream>

using namespace std;
int main(){
    float num,average,sum=0.0;
    int n,i;
    cout<<"Enter the total number of inputs:";
    cin>>n;


    for ( i;i<=n;++i){

        cout<<"Enter the number:";
        cin>>num;
        if(num<0.0){
            goto jump; /* goto statement which can be done using break,continue statement
                            we should not use goto statement as much as possible ,since it makes the program 
                            more complex and tangled
                                */
        }
        sum +=num;
       
    }

    jump:
        cout<<i<<endl;
        cout<<sum<<endl;
        average=sum/(i);
        cout<<"the average of the total number is:"<<average;

}