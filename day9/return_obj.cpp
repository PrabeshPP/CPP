#include <iostream>
using namespace std;

class Student{
    public:
    double marks1,marks2;

};

Student createStudents(){
    Student student;
    cout<<"Enter the first marks :";
    cin>>student.marks1;
    cout<<"Enter the second marks :";
    cin>>student.marks2;

    cout<<"\n";
    cout<<"Mark1 :"<<student.marks1<<endl;
    cout<<"Mark2 :"<<student.marks2;

    return student;

}

int main(){
    Student student1;
student1=createStudents();

}