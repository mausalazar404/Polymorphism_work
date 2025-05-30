

#include "Massage.h"
#include <string>
using namespace std;

Massage::Massage(){}

Massage::Massage(string service, int duration,float basePrice
    ,string appointmentTime):Service(service,duration,basePrice){
        this->appointmentTime = appointmentTime;
    }


string Massage::getTime() {
    return appointmentTime;
}

float Massage::calculateFinalP() {
    double price = basePrice;
    if (duration > 60) {
        price += 200;
    }
    return price;
}

float Massage::calculateFinalP(string client) {
    double price = calculateFinalP();
    if (client == "Returning") {
        price *= 0.9;
    }
    return price;
}

string Massage::getNote(string client){
        string note = "";
    if (duration > 60) {
        note += "Note: Duration exceeds 60 minutes. Surcharge applied: $200\n";
    }
    if (client == "Returning") {
        note += "Client Type: Returning Client\n";
        note += "Note: Returning client discount applied: 10%\n";
    }
    return note;
}