#include<iostream>
using namespace std;

int main(){
    int number=20;
    //if only statement
    if(number>40){
        cout<<"The number is greater than fourty"<<endl;

    }
    cout<<"The number is not greater than fourty"<<endl;
    //if/else statement
    int number2=1;
    if(number2>5){
        cout<<"The number is greater than zero"<<endl;
    }
    else{
        cout<<"It will give output incase above expression returns false"<<endl;
    }
    // if\elseif\else statement
    if(number+number>=60){
        cout<<"you have achieved sigma spot"<<endl;

    }else if(number+number2<=41 &&number+number2>=18){
        cout<<"Wooh!you have achieved alpha spot"<<endl;
    }else{
        cout<<"Ahh shit! here you go beta spot"<<endl;
    }

//Nested if/else if/else

if(number>=20){
    if(number+number2==21){
        cout<<"It is the first statement of the Nested if"<<endl;

    }else if(number+number2>=25){
        cout<<"It is the second statement of the Nested if"<<endl;
    }else {
        cout<<"it is the third statemenet of the Nested if"<<endl;
    }
}else{
    cout<<"This does not comes under nested if"<<endl;
}




}