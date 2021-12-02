# include <iostream>
using namespace std;

int itr(int a){
    int var=1;
    var=var*itr(a-1);
    return a;
}

int main(){
int value=itr(3);
cout<<value<<endl;
}