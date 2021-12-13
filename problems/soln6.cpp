#include<iostream>
using namespace std;

void bit(){
    int X=0;
    int n;
    cin>>n;
    string Statement;
    for (int i=0;i<n;++i){
        cin>>Statement;
        if(Statement[0]=='+'||Statement[2]=='+'){
            ++X;
        }else{

            --X;
        }

    }

    cout<<X;


}

int main(){
bit();
}