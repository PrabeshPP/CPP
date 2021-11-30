#include<iostream>
using namespace std;
 int main(){
     int num_int;
     double num_double=3.901;
     num_int=(int)num_double;//c_style type casting
     cout<<num_int<<endl;
     num_int=double(num_int);//old C++ style  type casting
     cout<<num_int<<endl;
     

     
 }