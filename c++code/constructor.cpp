#include<iostream>
#include<string>
using namespace std;
class student{
private:
string name;
int age;
string gender;
public:

student(string name_1, int age_2, string gender_3 )
{
name = name_1;
age= age_2;
gender= gender_3;
}
void displayinfo(){

cout<< "name:"<<name<<endl;
cout<<"age:"<<age<<endl;
cout<<"gender"<<gender<<endl;

}

};

int main(){
student Student("amit",21,"male");
Student.displayinfo();
return 0;

}
