#include<iostream>
using namespace std;

void sum(int a , int b ){
    
    cout<<"Sum of two numbers is : " <<a+b<<endl;
}

void sum(int a , int b , int c){
    cout <<"Sum of three numbers is : " <<a+b+c<<endl;

}

int main(){

sum(5,2);
sum(5,2,8);


    return 0;
}