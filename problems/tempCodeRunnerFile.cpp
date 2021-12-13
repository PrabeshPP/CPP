#include<iostream>
using namespace std;

int max(int m,int n){
    int product=m*n;
    int div=product/2;
    return div;


}

int main(){
int a,b;
cin>>a;
cin>>b;

int result=max(a,b);
cout<<result;

}