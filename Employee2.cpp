#include <iostream>

using namespace std;
class Employee{

    private:
    int emp_id;
    string name;

    public:
    Employee(){
        emp_id=101;
        name="sanket";
    }

    Employee(int emp_id,string name){
        this->emp_id=emp_id;
        this->name=name;
    }
    void setEmpId(int emp_id){
        this->emp_id=emp_id;

    }
     void setName(string name){
        this->name=name;
        
    }

    int getEmpId(){
        return emp_id;
    }

    string getName(){
        return name;
    }
    void display(){
        cout<<"\nEmp Id="<<emp_id;
        cout<<"\nEmployee Name="<<name;
    }

};

int main(){

    Employee e1;
    e1.display();
    return 0;
}