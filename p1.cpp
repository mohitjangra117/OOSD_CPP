#include<iostream>
using namespace std;

class Student{

private:
 int age;
 

public:
 
 Student(int age){
     this->age=age;
 }



  
  int getage(){
      return age;
  }
   
    
};

int main(){
    
    Student s1(21);
    // s1.setname(21);
    int abc=s1.getage();
    
    
    
    
    
    
    cout<<abc;
    
}