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

     
    Wall(Wall &obj){ // Copying the constructor
        length=obj.length;
        breadth=obj.breadth;
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
    Wall wall12=wall1;
    cout<<"\n";
    cout<<"The area of the wall 1 is "<<wall1.calculateArea()<<endl;
    cout<<"The area of wall 2 is "<<wall12.calculateArea();



}