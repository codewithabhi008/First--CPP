// Encapsulation Programming

#include <iostream>

using namespace std;

class Student {
    private:

    int rollno;
    string name;

    public:

    void setRollNo(int rollno) {
        this->rollno = rollno;

    }

    void setName(string name) {
        this->name = name;

    }

    int getRollNo(){
        return rollno;

    }

    string getName() {
        return name;
        
    }


};

int main(){

    Student s1;

    s1.setRollNo(101);
    s1.setName("Abhijeet");

    cout << "Roll No: " << s1.getRollNo() <<
    endl;
    cout << "Name:" << s1.getName() << endl;

    return 0;
}