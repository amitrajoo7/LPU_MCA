#include<iostream>
using namespace std;
class student{

    //we will define attributes and behaviours//
    //acess specifier  -> public, private ,protected
    //by default , variables and methods in a class are private//
    private : 
    int password;
    

    public:
    int rollNumber;
    int age;
    string name;

void mymethod(int x){

cout<< "value of number is :" << x <<endl;
}
//getters and setters

};
int main(){
student s1;
s1.age=20;
s1.mymethod(4);

cout <<s1.age;

return 0;
}