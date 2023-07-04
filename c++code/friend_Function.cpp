#include<iostream>
using namespace std;
class complex{
public:    
int real ,imag;
public:
friend complex sumcomplex(complex x, complex y);


void setnumber(int num1 , int num2){
real= num1;
imag=num2;
}

//2+3i
//3+4i
//---------
//5+7i
void printnumber(){

cout<<"your number is : " <<real << "+" <<imag <<"i"<<endl;

}
};
complex sumcomplex(complex obj1, complex obj2){
complex z; 
z.setnumber((obj1.real + obj2.real)),((obj1.imag +obj2.imag));
return z;
}

int main(){
complex c1, c2, sum;
c1.setnumber(1,2);
c1.printnumber();

c2.setnumber(3,4);
c2.printnumber();

sum = sumcomplex(c1,c2);
sum.printnumber();
}
