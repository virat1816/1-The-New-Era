#include <iostream>
using namespace std;

class Employee {
public:
    int emp_id;
    string emp_name;
    string emp_role;
    int emp_age;
    double emp_salary;
    int emp_experience;
    string emp_city;
    string emp_company_name;

    
    void display() {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee Role: " << emp_role << endl;
        cout << "Employee Age: " << emp_age << endl;
        cout << "Employee Salary: " << emp_salary << endl;
        cout << "Employee Experience: " << emp_experience << endl;
        cout << "Employee City: " << emp_city << endl;
        cout << "Employee Company Name: " << emp_company_name << endl << endl;

    }
};

int main() {
    Employee emp[5];

   
    for (int i = 0; i < 5; i++) {
        cout << "Enter details for employee " << i+1 << ":" << endl;
        cout << "Employee ID: ";
        cin >> emp[i].emp_id;
        cout << "Employee Name: ";
        cin >> emp[i].emp_name;
        cout << "Employee Role: ";
        cin >> emp[i].emp_role;
        cout << "Employee Age: ";
        cin >> emp[i].emp_age;
        cout << "Employee Salary: ";
        cin >> emp[i].emp_salary;
        cout << "Employee Experience : ";
        cin >> emp[i].emp_experience;
        cout << "Employee City: ";
        cin >> emp[i].emp_city;
        cout << "Employee Company Name: ";
        cin >> emp[i].emp_company_name;
        cout << endl;
    }

    

    return 0;
}

