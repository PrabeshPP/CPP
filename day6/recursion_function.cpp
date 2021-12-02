# include <iostream>
using namespace std;

int itr1(int a){
    int var;
if(a>1){
    var=a*itr1(a-1);
    return var;

}else{
    return 1;
}

}

int main(){
int value,n;
cout<<"Enter the number for its factorial :";
cin>>n;
value=itr1(n);
cout<<"The factorial of " <<n<< " is " <<value<<endl;
}