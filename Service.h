#ifndef SERVICE_H
#define SERVICE_H

#include <string>
using namespace std;


class Service{
    protected:
        string service;
        int duration;
        float basePrice;

    public:
        Service();
        Service(string,int,float);

        virtual string getDetails();
        virtual float calculateFinalP() = 0;
        virtual float calculateFinalP(string client) = 0;
        virtual string getNote(string client) = 0;

};

#endif