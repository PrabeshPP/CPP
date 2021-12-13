#include<iostream>
#include<cstdlib>
using namespace std;
//has to made some changes

void BeautifulMatrix(){
int arr[5][5];
for (int i=0;i<5;++i){
    for (int j=0;j<5;++j){
        cin>>arr[i][j];
    }
}
int a,b;
for (int i=0;i<5;++i){
    for (int j=0;j<5;++j){
        if(arr[i][j]==1){
        a=i;
        b=j;
        }
    }
}
int a1=abs(2-a);
int b1=abs(2-b);

int totalMove=a1+b1;

cout<<totalMove;
}

int main(){
BeautifulMatrix();

}