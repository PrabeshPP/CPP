#include <iostream>
using namespace std;

class Distance{
    private:
        int meter;
    friend int addMeter(Distance);
    public:
    Distance():meter(5){}
};

int addMeter(Distance d){
    d.meter+=5;
    return d.meter;
}

int main(){
Distance d;
cout<<"Distance : "<<addMeter(d)<<endl;
}