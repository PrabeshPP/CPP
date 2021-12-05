#include <iostream>
using namespace std;

struct struct_function
{
   string name;
   int age;
   double salary;
};



void display(struct_function st);
int main(){
    struct_function st;
    cout<<"Enter the name of the person:";
    getline(cin,st.name);
    cout<<"Enter the age of the person:";
    cin>>st.age;
    cout<<"Enter the salary of the person";
    cin>>st.salary;
    display(st);


}

void display(struct_function st){
    cout<<"The name of the person is "<<st.name<<",and the age is "<<st.age<<"\n ";
    cout<<"The salary of the person is"<<st.salary<<endl;
}