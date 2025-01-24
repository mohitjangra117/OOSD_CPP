#include<iostream>
using namespace std;

class Animal{

public:

virtual void eat(){                      //   Make the base class function virtual to use for overriding in sub class  
    cout<<"   Animal "<<endl;
}

};

class Horse:public Animal{

public:

 void eat() override {

    cout<<"Horse";
    
}

};


int main(){

Animal a;
Horse h;

a.eat();
h.eat();


return 0;
}