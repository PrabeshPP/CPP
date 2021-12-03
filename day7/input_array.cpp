#include <iostream>
using namespace std;

int main(){
    int numbers[6];
    cout<<"Enter all the six numbers :"<<endl;
    for (int i;i<6;++i){
        cin>>numbers[i]; // taking input from the user

    }
cout<<"All the six nummbers of any array is:";
    for (const int &n:numbers){ // using range based loop
cout<<n<<" "; // printing all the value of an array
    }
}