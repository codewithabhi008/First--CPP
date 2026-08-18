#include <iostream>

using namespace std;

class Employee{

    public:
    int emp_id;
    string name;

    //copy 
      Employee(){
         cout<<"Hello from Employee constuctor ";
    }

    Employee(const Employee &s){
        this->emp_id;
        this->name;
    }

    void display(){
        cout<<" Hello from Employee Class ";
    }

};

int main(){

    //OOPS --> object oriented programming 1.encapsulation 2.polymorphism 3.abstraction 4.inheritance

    Employee s1;
    s1.emp_id=101;
    s1.name="sanket";

    Employee s2(s1);
    s1.display();
    s2.display();
    return 0;
}

