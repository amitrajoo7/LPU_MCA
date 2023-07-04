#include<iostream>
using namespace std;
class rectangle
{

private:
int length;
int width;
 
 public:
 
 rectangle(int lenght1, int width1){
    length=lenght1;
    width=width1;
 }
int  getarea(){
    return length*width;
}

int getperimeter(){

    return 2*(length +width);
}

};

int main(){
rectangle Rectangle(5,6);

int area = Rectangle.getarea();
int perimeter = Rectangle.getperimeter();
cout<< "Area: "<< area <<endl;
cout<<"perimeter"<<perimeter<<endl;
return 0;
}


