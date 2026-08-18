#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:

    // Default Constructor
    Student() {
        rollNo = 101;
        name = "Abhi";
        marks = 85.5;
    }

    // Parameterized Constructor
    Student(int rollNo, string name, float marks) {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    // Setter Functions
    void setRollNo(int rollNo) {
        this->rollNo = rollNo;
    }

    void setName(string name) {
        this->name = name;
    }

    void setMarks(float marks) {
        this->marks = marks;
    }

    // Getter Functions
    int getRollNo() {
        return rollNo;
    }

    string getName() {
        return name;
    }

    float getMarks() {
        return marks;
    }
};

int main() {

    // Default constructor
    Student s1;

    cout << "Student 1" << endl;
    cout << "Roll No: " << s1.getRollNo() << endl;
    cout << "Name: " << s1.getName() << endl;
    cout << "Marks: " << s1.getMarks() << endl;

    cout << endl;

    // Parameterized constructor
    Student s2(102, "Jyoti", 90.5);

    cout << "Student 2" << endl;
    cout << "Roll No: " << s2.getRollNo() << endl;
    cout << "Name: " << s2.getName() << endl;
    cout << "Marks: " << s2.getMarks() << endl;

    return 0;
}