#include <iostream>
#include "Massage.h"
using namespace std;

int main() {
    int duration;
    float basePrice;
    string time;
    string client;

    cout << "Enter duration (in minutes): ";
    cin >> duration;

    cout << "Enter base price: ";
    cin >> basePrice;
    cin.ignore();

    cout << "Enter appointment time (e.g., 3:00 PM): ";
    getline(cin, time);

    cout << "Enter client type (New or Returning): ";
    getline(cin, client);

    Massage massage("Personalized therapeutic massage", duration, basePrice, time);

    cout << "Service: Personalized therapeutic massage" << endl;
    cout << "Duration: " << duration << " minutes" << endl;
    cout << "Base Price: $" << (int)basePrice << endl;
    cout << "Time: " << massage.getTime() << endl;
    cout << massage.getNote(client);
    float finalPrice = massage.calculateFinalP(client);
    cout << "Final Price: $" << (int)finalPrice << endl;
    cout << "Booking Confirmed" << endl;
    cout << "=========================================" << endl;

    return 0;
}
