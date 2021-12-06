#include<iostream>
using namespace std;


// we can use operator overloading with data types like char,string,int,float //
class Count{
    private:
    int value;

    public:
    Count():value(5) {}

    void operator ++(){
        ++value;
    }

    void operator ++(int){ // ++"int " is use inorder to to use the unary ++ of postfic in overloading //
        value++;
    }

    void display(){
        cout<<"Count : "<<value;
    }

};

int main(){
    Count count1;
    ++count1;
    count1.display();
    cout<<"\n";
    count1++;
    count1.display();
}
