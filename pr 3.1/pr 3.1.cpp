#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    float basicSalary;
    float bonus;

public:
    Employee() {
        name = "Unknown";
        basicSalary = 0;
        bonus = 1000;
    }

    Employee(string n, float basic) {
        name = n;
        basicSalary = basic;
        bonus = 1000;
    }

    Employee(string n, float basic, float b) {
        name = n;
        basicSalary = basic;
        bonus = b;
    }

    inline float calculateTotalSalary() {
        return basicSalary + bonus;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << calculateTotalSalary() << endl;
        cout << "---------------------------" << endl;
    }
};

int main() {
    cout<<"Name : Dhairya Vasoya"<<endl;
    cout<<"ID : 25CE135"<<endl;
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee* emp = new Employee[n];

    for (int i = 0; i < n; i++) {
        string name;
        float basic, bonus;
        int choice;

        cout << "\nEnter details for employee " << i + 1 << endl;
        cout << "Name: ";
        cin >> name;
        cout << "Basic Salary: ";
        cin >> basic;

        cout << "Enter 1 for default bonus or 2 for custom bonus: ";
        cin >> choice;

        if (choice == 1) {
            emp[i] = Employee(name, basic);
        } else {
            cout << "Enter bonus: ";
            cin >> bonus;
            emp[i] = Employee(name, basic, bonus);
        }
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < n; i++) {
        emp[i].display();
    }

    delete[] emp;

    return 0;
}
