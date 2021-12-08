#include <iostream>
using namespace std;


//c++ new operator
// use new to allocate the memory address 
// we should use delete to deallocate the memory address


//c++ new and delete operator for Objects

class Student{
    int age;
    public:
    Student():age(12){}
    void getAge(){
        cout<<"Age="<<age<<endl;
    }

};

void array_fun();
int main(){
    int* pointVar;
    //dynamically allocating memory
    //for an int variable
    pointVar=new int;
    *pointVar=30;
    cout<<*pointVar;
    //deallocate the memory
    delete pointVar;
    cout<<'\n';
    array_fun();

    Student* ptr11=new Student();
    ptr11->getAge();
    delete ptr11;



}
// c++ new and delete[] operator for an array
void array_fun(){
    int num;
    cout<<"Enter the number of students : ";
    cin>>num;
    float* ptr;
    ptr=new float[num];
    cout<<"Enter the GPA of students :"<<endl;
    for (int i=0;i<num;++i){
cout<<"Stduents "<<i+1<<":";
cin>>*(ptr+i);
    }
    cout<<"\n Displaying GPA of students:"<<endl;
    for (int j=0;j<num;++j){
        cout<<"GPA of Students "<< j+1<<" : "<< *(ptr+j) << ""<<endl;
    }

delete[] ptr;


}