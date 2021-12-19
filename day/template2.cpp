#include<iostream>
using namespace std;
//class template with multiple parameters and default parameters
template<class T,class U,class V=char>
class ClassTemplate{
    private:
    T var1;
    U var2;
    V var3;
    public:
        ClassTemplate(T v1,U v2,V v3):var1(v1),var2(v2),var3(v3){}

        void printVar(){
            cout<<"Var1= "<<var1<<endl;
            cout<<"Var2= "<<var2<<endl;
            cout<<"Var3= "<<var3<<endl;
        }


};

int main(){
    ClassTemplate<int,double> classtemplate(1,5.5,'c');
    ClassTemplate<bool,float,int> classtemplate2(true,2.355,35);
    cout<<"Obj1 value is "<<endl;
    classtemplate.printVar();
    cout<<"object 2 value is "<<endl;
    classtemplate2.printVar();

}