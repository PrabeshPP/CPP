#include <iostream>
using namespace std;

class Students{
    public:
    double marks;
    public:
    Students(double m){
        marks=m;
    }
};

//passing the arguments to the function
void CalculateAverage(Students s1,Students s2){ 
    double average;
    average=(s1.marks+s2.marks)/2 ; //Average of two students
    cout<<"The average of two students is "<<average;

}

//passing the arg. to function and returning the data from the function

double CalculateAverage1(Students s11,Students s22){
    double average11;
    average11=(s11.marks+s22.marks)/2;
    return average11;
}




int  main(){
    double f1,f2;
    cout<<"Enter the marks of first student:";
    cin>>f1;
    cout<<"Enter the marks of the seconds students :";
    cin>>f2;
    Students s1(f1);
    Students s2(f2);
    CalculateAverage(s1,s2);
    cout<<"\n";
    double average=CalculateAverage1(s1,s2);
    cout<<"The average of the two marks is "<<average;
    createStudent();

}