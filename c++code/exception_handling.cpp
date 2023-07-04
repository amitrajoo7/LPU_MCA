#include<iostream>
using namespace std;
int main(){
int a ,b;
cout<<"enter value a and b " <<endl;

cin>>a>>b;

try{

    if(b!=0){

        cout<<a/b;
    }

    else{

        throw b;

    }
}
catch(int e){

    cout<<"Divison by zero "<<e << endl;
}

}