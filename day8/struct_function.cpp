#include <iostream>
using namespace std;

struct struct_function
{
   string name;
   int age;
   double salary;
};


struct_function getData(struct_function st);
void display(struct_function st); //we have to define which type of argument we are going to pass
int main(){
    struct_function st;
    st=getData(st);
    
    display(st); // passing the structur data type in the display function


}

void display(struct_function st){
    cout<<"The name of the person is "<<st.name<<",and the age is "<<st.age<<"."<<endl;
    cout<<"The salary of the person is "<<st.salary<<endl;
}

struct_function getData(struct_function st){
    cout<<"Enter the Full-Name:";
    getline(cin,st.name);
    cout<<"Enter the Age:";
    cin>>st.age;
    cout<<"Enter the Salary:";
    cin>>st.salary;

    return st;


}