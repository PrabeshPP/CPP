#include <iostream>
using namespace std;
class Fruit{
    private:
    string name;
    protected:
    string type;
    public:
    void setName(string str){
        name=str;
    

    }

//getter for the variable name
    string getName(){
        return name;
    }

void taste(){
    cout<<"I taste sweeter!";
}
    void famous(){
        cout<<"I am not too famous";
    }




};
class Kiwi:public Fruit{
public:
    void setFruitType(string ty){
        type=ty;


    }

    void display(string n){
        cout<<"I am "<<n<<" ,and I belongs to "<<type<<""<<endl;


    }

    
};

int main(){
    string fruitName,type;

    cout<<"Enter the  fruit name :";
    cin>>fruitName;
    cout<<"Enter the fruit type :";
    cin>>type;
    Kiwi kiwi;
    kiwi.setName(fruitName);
    kiwi.taste();
    kiwi.famous();
    kiwi.setFruitType(type);
    kiwi.display(kiwi.getName());

}