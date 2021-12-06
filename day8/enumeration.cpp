#include <iostream>
using namespace std;
// enumerated is user-defined data type
enum Days{
    Sunday=1,
    Monday,
    Tuesday,
    Thursday,
    Friday,
    Saturday
};
int main(){
Days day; // declaring enum variable
day=Thursday;
if(day==Thursday){
    cout<<"It's thursday";
}

    
}