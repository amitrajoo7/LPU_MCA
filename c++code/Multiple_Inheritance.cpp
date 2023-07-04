#include<iostream>
using namespace std;
//multiplplee inheritance a class can inherit more than one class meaning a single child class can have multiple parent classes.

//parent class
class animal{

    public:

    void eat(){

        cout<<"Eating"<<endl;
    }
};

//parent class
class dog{
public:
void bark(){

cout<<"Barking"<< endl;


}
};

class babydog: public animal, public dog{

public:
void love(){

    cout<< "loving"<<endl;

}

};
int main(){
babydog d1;
d1.eat();
d1.bark();
d1.love();
return 0;
}