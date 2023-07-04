#include<iostream>
using namespace std;
#include<unordered_set>
int main()
{
unordered_set<int> u_set ={10,30,20,60,20};
u_set.insert(55);
if(u_set.find(30)!=u_set.end())
{
    cout<<"yes"<<endl;
}
else{
    cout<<"No"<<endl;
}

cout<<"Numbers:";
for(int num:u_set){
    cout<<num<<" ";
}

}
//insert()-
//find()-
//count()-
//empty()-