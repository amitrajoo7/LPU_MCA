#include<iostream>
using namespace std;
#include<map>

int main()
{

map<int,string> student;

map<int,string>::iterator iter;

student[1] ="john";

student[2] ="danny";
student.insert(make_pair(3,"tom"));

student.insert(make_pair(4,"harry"));

for(iter = student.begin(); iter != student.end();iter++)
{
    cout <<(*iter).first << " _ " <<(*iter).second<<endl;
}



}