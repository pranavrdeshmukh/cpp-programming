#include <iostream>
using namespace std;

class Employee {
private:
    int empId;
    string name;
    float salary;

public:
    void accept() {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee Details" << endl;
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee emp;

    emp.accept();
    emp.display();

    return 0;
}
