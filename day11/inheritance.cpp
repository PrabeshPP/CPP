#include <iostream>
using namespace std;

class Animal{
public:
string color;
protected:
string type;

    public:
    void eat(){
        cout<<"I can eat!"<<endl;
    }

    void sleep(){
        cout<<"I can sleep!"<<endl;
    }

    void setColor(string clr){
        color=clr;

    }

    string getClr(){
        return color;
    }
};

class Dog:public Animal{
    public:
    void bark(){
        cout<<"I can Bark!"<<endl;
    }

    void setType(string ty){
        type=ty;
    }

    void displayInfo(string c){
        cout<<"I am  a "<<type<<endl;
        cout<<"My color is "<<c<<endl;


    }
};

int main(){
    Dog dog;
    dog.eat();
    dog.sleep();
    dog.bark();
    dog.setColor("red");
    dog.setType("Mamal");
    dog.displayInfo(dog.getClr());


}