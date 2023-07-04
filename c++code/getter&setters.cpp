#include<iostream>
using namespace std;
class student{

    //we will define attributes and behaviours//
    //acess specifier  -> public, private ,protected
    //by default , variables and methods in a class are private//
    private : 
    int password=123;
    

    public:
    int rollNumber;
    int age;
    string name;

void mymethod(int x){

cout<< "value of number is :" << x <<endl;
}
//getters 
int getpassword(){
  return password;

}

//setters
void setpassword(int input){

password = input;

}

int getage(){

    return age;

}

void set age 

};
int main(){
student s1;
student s2;

s1.name="jhon";
cout<< s1.name<<endl;
s2.name="denny"
cout<<s2.name<<endl;
s1.mymethod(4);
cout<<"Old password of s1 is :" <<s1.getpassword()<<endl;
s1.setpassword(9872);
cout<< "new password of s1 is "<< s1.getpassword()<<endl;

cout<< "old age  of s1 is "<< s1.getage()<<endl;
s1.getage(-100);
cout<< "new age  of s1 is "<< s1.getage ()<<endl;
return 0;
}