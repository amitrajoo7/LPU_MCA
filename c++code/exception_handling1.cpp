#include<iostream>
using namespace std;

void square(){

int sq;
cout<<"Enter a number"<< endl;
cin>> sq;
if(sq > 0){
 cout<<"square = " <<sq*sq;
}

else{
    throw sq;
}
}
int main(){


try{
    square();
}

catch(int e){
    cout<<"exceptioncaught"<<endl;
}

}