#include<iostream>
using namespace std;


// we can use operator overloading with data types like char,string,int,float //
// Overload ++ when used as prefix and postfix

class Count{
    private:
    int value;

    public:
    Count():value(5) {}

    void operator ++(){
        ++value;
    }

    void operator ++(int){
        value++;
    }

    void display(){
        cout<<"Count : "<<value;
    }

};

int main(){
    
}
