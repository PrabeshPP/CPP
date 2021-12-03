#include <iostream>
using namespace std;

int main(){
    int numbers[6];
    cout<<"Enter all the six numbers :"<<endl;
    for (int i;i<6;++i){
        cin>>numbers[i]; // taking input from the user

    }
cout<<"All the six nummbers of any array is:";
    for (const int &n:numbers){ // using range based loop
cout<<n<<" "; // printing all the value of an array
    }

// program to calulate sum and average of an elements of an array
double sum=0;
double count=0;
double average=0;

for (const int &i:numbers){
    sum+=i;
    ++count;
    
}
average=(sum/count);

cout<<"The average of an array is:"<<average;



}