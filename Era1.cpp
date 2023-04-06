#include <iostream>
#include <string.h>
using namespace std;

class Hotel {
public:
    int hotel_id;
    string hotel_name;
    int hotel_staff;
};
int main(){
	Hotel hotel1, hotel2, hotel3;
	
	
	hotel1.hotel_id = 1;
	hotel1.hotel_name = "Crowne Plaza";
	hotel1.hotel_staff = 80;
	
	hotel2.hotel_id = 2;
	hotel2.hotel_name = "Hotel Elite";
	hotel2.hotel_staff = 90;
	
	hotel3.hotel_id = 3;
	hotel3.hotel_name = "The New View";
	hotel3.hotel_staff = 100;


    cout << "Hotel ID: " << hotel1.hotel_id << endl;
    cout << "Hotel Name: " << hotel1.hotel_name << endl;
    cout << "Hotel Staff: " << hotel1.hotel_staff << endl << endl;
    
    cout << "Hotel ID: " << hotel2.hotel_id << endl;
    cout << "Hotel Name: " << hotel2.hotel_name << endl;
    cout << "Hotel Staff: " << hotel2.hotel_staff << endl << endl;
    
    cout << "Hotel ID: " << hotel3.hotel_id << endl;
    cout << "Hotel Name: " << hotel3.hotel_name << endl;
    cout << "Hotel Staff: " << hotel3.hotel_staff << endl << endl;
    
    return 0;
}
