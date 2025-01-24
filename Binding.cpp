#include<iostream>
using namespace std;

class Animal{
    private:
    string name;

    public:    

    void eat(){                    // Early Binding                
        cout<<"Animal eats"<<endl;
    }

    virtual void run(){                                      //  late Binding 
        cout<<"Animal run"<<endl;
    }

};



class Horse:public Animal   {   
    private:
    string name;

    public:    

    void eat(){                          //  Early Binding          
        cout<<"Animal eats"<<endl;
    }

    void run() override{
        cout<<"Horse run"<<endl;
    }

};



int main(){

Animal a1;
Horse h1;

a1.eat();
h1.eat();


// Horse h2;

// Animal &a2=h2;


// a2.run();          // call horse run 

// h2.Animal::run();   //   call animal run


Horse h2;

Animal &a2=h2;

a2.run();

h2.Animal::run();





    return 0;
}