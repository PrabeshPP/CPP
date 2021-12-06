#include <iostream>
using namespace std;


class Wall{
    private:
        double length;
        double breadth;
    public:
        Wall(double len,double bred    ){  // constructor of the class "Wall"
        length=len;
        breadth=bred;

        }

        double calculateArea(){
        return length*breadth;
        }
};

int main(){
    double l,b;

  
    cout<<"Enter the length of the wall :";
    cin>>l;
    cout<<"Enter the breadth of the wall :";
    cin>>b;
   
    Wall wall1(l,b);
    cout<<"\n";
    cout<<"The area of the wall is "<<wall1.calculateArea();



}