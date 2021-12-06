#include <iostream>
using namespace std;

class Area{
    public:
        double length;
        double breadth;
    double calculateArea(){
        return length*breadth;
    }

};

int main(){
    Area area;
    area.length=10;
    area.breadth=20;
    cout<<"The area of the room is "<<area.calculateArea();



}