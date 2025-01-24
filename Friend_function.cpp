#include<iostream>
using namespace std;

class Box{
    private:
    int l;
    int w;
    int h;


public:

Box(int height, int width , int length){
    l=length;
    h=height;
    w=width;
}

friend void volume(Box &data);     //   friend function declaration 


};

void volume(Box &data){     // friend function definition
    cout<<"Volume of the box is : " << data.l*data.w*data.h;         //   use data.h , data.w
}



int main(){

Box b1(2,3,4);

volume(b1);

}