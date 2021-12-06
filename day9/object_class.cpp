#include <iostream>
using namespace std;

class Area{
    public: // length & breadth has been declare as public data which can be accessed anywhere 
        double length;
        double breadth;
        double calculateArea(){
            return length*breadth;
        }
    private:  /* another set of length and breadth has been declared as private
     which can be accessed outside of the class*/
        double length1;
        double breadth1;
    public:
        void initData(double len,double  bre){
            length1=len;
            breadth1=bre;
        };

        double calculateArea1(){
            return length1*breadth1;
        }

};

int main(){
    Area area;
    area.initData(11,12);
    area.length=10;
    area.breadth=20;
    cout<<"The area of the room is "<<area.calculateArea()<<endl;
    cout<<"Area using private variable:"<<area.calculateArea1();



}