#include<iostream>
using namespace std;
struct Person{
    char name[50];
    int age;
    float salary;

};

int main(){
    Person person;
    cout<<"Enter the full name:";
    cin.get(person.name,50);
    cout<<"Enter the age:";
    cin>>(person.age);;
    cout<<"Enter the salary:";
    cin>>(person.salary);

    //printing the value of the structure of the person
    cout<<"The name of the person is "<<person.name<<endl;
    cout<<"The age of the person is"<<person.age<<endl;
    cout<<"The salary of the person is "<<person.salary<<endl;




}