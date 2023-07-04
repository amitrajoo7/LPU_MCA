#include<iostream>
using namespace std;

//encapsulation is binding togther data member and function that manipulates them 
// features - we cannnoot access any function from the class direcctly, we beed an object to access the function that is using the member variable of thr class
// increase the security of the data
// it help to control the modification the data member

class encapsulation{

private:
// data hide from outside world
int x;
public:

void set(int val){

x = val;
}

}

