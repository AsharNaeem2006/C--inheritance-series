#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void getPerson() {
        cin >> name >> age;
    }
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee {
protected:
    int employeeID;
    float salary;
public:
    void getEmployee() {
        cin >> employeeID >> salary;
    }
    void displayEmployee() {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Person, public Employee {
    string department;
public:
    void getManager() {
        cin >> department;
    }
    void displayManager() {
        displayPerson();
        displayEmployee();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Manager m;

    m.getPerson();
    m.getEmployee();
    m.getManager();

    cout << "\n--- Manager Details ---\n";
    m.displayManager();

    return 0;
}
