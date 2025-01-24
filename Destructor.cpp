#include<iostream>
using namespace std;

//class
class Student  {

// object
private:
string *name;    //   Mkae pointer to use destructor
int *age;

// constructors

public :


// Default constructor

Student(){

cout<<"Default constructor called" << endl;

}

// Parameterized Constructor

Student(string nam, int ag){
    age=new int(ag);                    //  Allocate new memory space 
    name=new string(nam);
}



// copy constructor

Student(const Student &s){
        name=s.name;
    age=s.age;
}




// Getter amnd Setter

string getname(){
    return *name;                // use pointer to return 
}

int getage(){
    return *age;
}





// Destructor    


~Student(){
    delete name;
    delete age;
    cout<<"Deleted Name and Age";
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