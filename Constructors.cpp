#include<iostream>
using namespace std;

//class
class Student  {

// object
private:
string name;
int age;

// constructors

public :


// Default constructor

Student(){

cout<<"Default constructor called" << endl;

}

// Parameterized Constructor

Student(string nam, int ag){
    age=ag;
    name=nam;
}



// copy constructor

Student(const Student &s){
    name=s.name;
    age=s.age;
}




// Getter amnd Setter

string getname(){
    return name;
}

int getage(){
    return age;
}





};


int main(){

cout<<"Hello" << endl;

Student s1; // Default constructor called

Student s2("ABCD" ,20);   

// Parameterized constructor

cout<<s2.getname()<<endl;
cout<<s2.getage()<<endl;


// copy  constructor

Student s3=s2;

cout<<s3.getname()<<endl;
cout<<s3.getage()<<endl;



return 0;
}