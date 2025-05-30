
#include "Service.h"
#include <string>
using namespace std;

Service::Service(){}

Service::Service(string service, int duration,float basePrice){
    this->service = service;
    this->duration = duration;
    this->basePrice = basePrice;
}

string Service::getDetails() {
    string details = "Service: " + service + "\n";
    details += "Duration: " + to_string(duration) + " minutes\n";
    details += "Base Price: $" + to_string((int)basePrice) + "\n";
    return details;
}

