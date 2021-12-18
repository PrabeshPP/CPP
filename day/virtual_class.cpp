//Example 2
#include <iostream>
using namespace std;


class Animal{
    private:
    string type;
    public:
    Animal():type("Animal"){}
    virtual string getType() {
        return type;
    }
};

class Dog:public Animal{
    private:
        string type;
    public:
    Dog():type("Carlo"){}
    string getType() override{
        return type;
    }
};

class Cat:public Animal{
    private:
    string type;
    public:
    Cat():type("Meow"){}

    string getType() override{
        return type;
    }
};

void Print(Animal *animal){
    cout<<"Animal :"<<animal->getType()<<endl;
}

int main(){
   
    Animal *animal1=new Animal();
    Dog* dog=new Dog(); // new also create instance address of the Class
    Cat* cat=new Cat();
    Print(animal1);
    Print(dog);
    Print(cat);

}