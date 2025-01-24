#include<iostream>
using namespace std;



void value(int a ){      // call by value    
    a=a+10;
}


void ref(int &b){        // call by reference without pointer           
    b=b+1;
}


void pointer(int *c){     // call by refernce with pointer 
   *c = *c + 1;
}

int main(){

int a=10;
int b=20;
int c=30;

value(a);
ref(b);
pointer(&c);


cout<<"Call by value : "<<a<<endl;
cout<<"Call by reference without pointer : "<<b<<endl;
cout<<"Call by refernce with pointer : "<<c<<endl;


    return 0;
}