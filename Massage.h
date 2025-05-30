#ifndef MASSAGE_H
#define MASSAGE_H


#include "Service.h"
#include <string>
using namespace std;


class Massage: public Service{
    private:
        string appointmentTime;

    public:
        Massage();
        Massage(string,int,float,string);

        string getTime();
        float calculateFinalP()override;
        float calculateFinalP(string client)override;
        string getNote(string client)override;
       
};

#endif