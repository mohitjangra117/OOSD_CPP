#include<iostream>
using namespace std;

// Inheritance 

class Animal{

private:

string name;

public:

Animal(){
    name="Horse";
}

void eats(){
    cout<<"Animal Eats";
}


};



class Horse: public Animal{


};


int main(){

Horse h1;

h1.eats();


}