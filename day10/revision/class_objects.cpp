#include<iostream>
using namespace std;

class Employee{
    private:
    int id;
    string name;
    double age;
    double salary;
public:
Employee(int id1,string name1,double age1,double salary1){
    id=id1;
    name=name1;
    age=age1;
    salary=salary1;
}

void display(){
    cout<<"The name of the Emplyoee with id no. "<<id<<" is " <<name<<endl;;
    cout<<"Salary of the emplyoee is "<<salary<<endl;
    cout<<"Age of the emplyoee is "<<age<<endl;

}
};

int main(){
    int id;
    string name;
    double age ,salary;
   
    cout<<"Enter the details about the emplyoee :"<<endl;
    cout<<"Enter the id :";
    cin>>id;
    cout<<"Enter the Name :";
    cin>>name;
    cout<<"Enter the age :";
    cin>>age;
    cout<<"Enter the salary :";
    cin>>salary;
    Employee employee1(id,name,age,salary);
    employee1.display();

}