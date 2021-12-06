#include <iostream>
using namespace std;

struct Distance
{
int feet;
float  inch;
};

int main(){
    Distance *ptr,d;
    ptr=&d;
    cout<<"Enter feet";
    cin>>ptr->feet;
    cout<<"Enter the inch";
    cin>>ptr->inch;
    cout<<"Feet is "<<(*ptr).feet<<endl;// we can also use ptr->feet which is more preferred
    cout<<"Inch is "<<(*ptr).inch<<endl;
}