#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int release_year;
    
    void display() {
        cout << "CAR ID: " << car_id << endl;
        cout << "CAR COMPANY Name: " << car_company_name << endl;
        cout << "CAR COLOR: " << car_color << endl;
        cout << "CAR MODEL: " << car_model << endl;
        cout << "RELEASE YEAR: " << release_year << endl << endl;
    }
};

int main() {
    Car cars[4];
   
    for (int i = 0; i < 4; i++) {
        cout << "Enter details for car " << i+1 << ":" << endl;
        cout << "Car ID: ";
        cin >> cars[i].car_id;
        cout << "Car company Name: ";
        cin >> cars[i].car_company_name;
        cout << "Car color: ";
        cin >> cars[i].car_color;
        cout << "Car model: ";
        cin >> cars[i].car_model;
        cout << "Release year: ";
        cin >> cars[i].release_year;
        cout << endl;
    }

    cout << "Details of all cars:" << endl;
    for (int i = 0; i < 4; i++) {
        cars[i].display();
    }

    return 0;
}

