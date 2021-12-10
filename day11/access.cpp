#include<iostream>
using namespace std;

// ways to use public,private,and protected inheritance
class BaseClass{
    public:
    int x=100;
    private:
    int y=10;
    protected:
    int z=20;

    public :
    int gety(){
        return y;

    }


};


// c++ demonstrations of working public class
class PublicDerivedClass:public BaseClass{
public:
    int getZ(){
        return z;
    }
};

//c++ demonstrations of working with protected class
class ProtectedDerivedclass:protected BaseClass{
    public:
    int getX(){
        return x;
    }
    int getZ1(){
        return z;
    }




};


//C++ demonstrations of working with private base class
class PrivateDerivedclass:private BaseClass{
    public:

    int getx11(){
        return x;
    }

    int getz12(){
        return z;
    }




};





int main(){
    PublicDerivedClass publicderivedclass;
    ProtectedDerivedclass protectedderivedclass;
    PrivateDerivedclass privatederivedclass;

 cout<<"Private ="<<publicderivedclass.gety()<<endl;
 cout<<"Public ="<<publicderivedclass.x<<endl;
 cout<<"Protected ="<<publicderivedclass.getZ()<<endl;

// printing the value using protected inherited derived class

cout<<"Private varibale can not be access!"<<endl;
cout<<"Protected ="<<protectedderivedclass.getZ1()<<endl;
cout<<"Public ="<<protectedderivedclass.getX()<<endl;

//printing the value using private ingeriteed derived class
cout<<"Private variable can not be access!"<<endl;
cout<<"Protected ="<<privatederivedclass.getz12()<<endl;
cout<<"Public ="<<privatederivedclass.getx11()<<endl;
}