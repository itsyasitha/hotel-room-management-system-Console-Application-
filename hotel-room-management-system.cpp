#include <iostream>
using namespace std;

int main() {
    int quant;
    int choice;

    int QSingleRoom = 0, QDoubleRoom = 0, QFamilyRoom = 0, QDeluxeRoom = 0, QSuite = 0, QPenthouse = 0;
    int SSingleRoom = 0, SDoubleRoom = 0, SFamilyRoom = 0, SDeluxeRoom = 0, SSuite = 0, SPenthouse = 0;
    int Total_SingleRoom = 0, Total_DoubleRoom = 0, Total_FamilyRoom = 0, Total_DeluxeRoom = 0, Total_Suite = 0, Total_Penthouse = 0;

    cout << "***********************************************";
    cout << "\n\t\t   Room Management System";
    cout << "\n***********************************************";
    cout << "\n\t\t | Rooms availability check |";
    cout << "\n\n Single Rooms available: ";
    cin >> QSingleRoom;
    cout << " Double Rooms available: ";
    cin >> QDoubleRoom;
    cout << " Family Rooms available: ";
    cin >> QFamilyRoom;
    cout << " Deluxe Rooms available: ";
    cin >> QDeluxeRoom;
    cout << " Suites available: ";
    cin >> QSuite;
    cout << " Penthouses available: ";
    cin >> QPenthouse;

m: // jump label for menu

    cout << "\n\n\t\t Please select what type of room you want to reserve:";
    cout << "\n\n1) Single Room";
    cout << "\n2) Double Room";
    cout << "\n3) Family Room";
    cout << "\n4) Deluxe Room";
    cout << "\n5) Suite";
    cout << "\n6) Penthouse";
    cout << "\n7) Information regarding sales and collection";
    cout << "\n8) Exit";
    cout << "\n\n Please enter a choice: ";
    cin >> choice;

    switch (choice) {

    case 1:
        cout << "Enter the number of single rooms you want: ";
        cin >> quant;
        if (QSingleRoom - SSingleRoom >= quant) {
            SSingleRoom += quant;
            Total_SingleRoom += quant * 45;
            cout << "\n\n\t\t" << quant << " room(s) have been allocated.\n";
        } else {
            cout << "\n\t Only " << QSingleRoom - SSingleRoom << " Single rooms remaining.";
        }
        break;

    case 2:
        cout << "Enter the number of double rooms you want: ";
        cin >> quant;
        if (QDoubleRoom - SDoubleRoom >= quant) {
            SDoubleRoom += quant;
            Total_DoubleRoom += quant * 70;
            cout << "\n\n\t\t" << quant << " room(s) have been allocated.\n";
        } else {
            cout << "\n\t Only " << QDoubleRoom - SDoubleRoom << " double rooms remaining.";
        }
        break;

    case 3:
        cout << "Enter the number of family rooms you want: ";
        cin >> quant;
        if (QFamilyRoom - SFamilyRoom >= quant) {
            SFamilyRoom += quant;
            Total_FamilyRoom += quant * 100;
            cout << "\n\n\t\t" << quant << " room(s) have been allocated.\n";
        } else {
            cout << "\n\t Only " << QFamilyRoom - SFamilyRoom << " family rooms remaining.";
        }
        break;

    case 4:
        cout << "Enter the number of deluxe rooms you want: ";
        cin >> quant;
        if (QDeluxeRoom - SDeluxeRoom >= quant) {
            SDeluxeRoom += quant;
            Total_DeluxeRoom += quant * 150;
            cout << "\n\n\t\t" << quant << " room(s) have been allocated.\n";
        } else {
            cout << "\n\t Only " << QDeluxeRoom - SDeluxeRoom << " deluxe rooms remaining.";
        }
        break;

    case 5:
        cout << "Enter the number of suites you want: ";
        cin >> quant;
        if (QSuite - SSuite >= quant) {
            SSuite += quant;
            Total_Suite += quant * 230;
            cout << "\n\n\t\t" << quant << " suite(s) have been allocated.\n";
        } else {
            cout << "\n\t Only " << QSuite - SSuite << " suites remaining.";
        }
        break;

    case 6:
        cout << "Enter the number of penthouses you want: ";
        cin >> quant;
        if (QPenthouse - SPenthouse >= quant) {
            SPenthouse += quant;
            Total_Penthouse += quant * 300;
            cout << "\n\n\t\t" << quant << " penthouse(s) have been allocated.\n";
        } else {
            cout << "\n\t Only " << QPenthouse - SPenthouse << " penthouses remaining.";
        }
        break;

    case 7:
        cout << "\n\t\tDetails of sales and collection";

        cout << "\n\n Single Rooms: had " << QSingleRoom 
             << ", sold " << SSingleRoom 
             << ", remaining " << QSingleRoom - SSingleRoom 
             << ", collection $" << Total_SingleRoom;

        cout << "\n\n Double Rooms: had " << QDoubleRoom 
             << ", sold " << SDoubleRoom 
             << ", remaining " << QDoubleRoom - SDoubleRoom 
             << ", collection $" << Total_DoubleRoom;

        cout << "\n\n Family Rooms: had " << QFamilyRoom 
             << ", sold " << SFamilyRoom 
             << ", remaining " << QFamilyRoom - SFamilyRoom 
             << ", collection $" << Total_FamilyRoom;

        cout << "\n\n Deluxe Rooms: had " << QDeluxeRoom 
             << ", sold " << SDeluxeRoom 
             << ", remaining " << QDeluxeRoom - SDeluxeRoom 
             << ", collection $" << Total_DeluxeRoom;

        cout << "\n\n Suites: had " << QSuite 
             << ", sold " << SSuite 
             << ", remaining " << QSuite - SSuite 
             << ", collection $" << Total_Suite;

        cout << "\n\n Penthouses: had " << QPenthouse 
             << ", sold " << SPenthouse 
             << ", remaining " << QPenthouse - SPenthouse 
             << ", collection $" << Total_Penthouse;

        cout << "\n\n\n Total collection: $" 
             << Total_SingleRoom + Total_DoubleRoom + Total_FamilyRoom + Total_DeluxeRoom + Total_Suite + Total_Penthouse;
        break;

    case 8:
        exit(0);

    default:
        cout << "\n Please select a valid number from the menu.";
    }

    goto m;

    return 0;
}
