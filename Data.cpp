//
// Created by Sarah Nicholls on 12/3/19.
//

#include "Data.h"


//overloaded comparison operator
bool Data::operator<(const Data &rhs) {
    if(violation < rhs.violation){
        return true;
    }else{
        return false;
    }
}
//overloaded comparison operator
bool Data::operator<=(const Data &rhs) {
    if(violation <= rhs.violation){
        return true;
    }else{
        return false;
    }
}

//overloaded output stream
ostream &operator<<(ostream &os, const Data &d) {
    return os << d.state << " " << d.vehicleType << " " << d.vehicleMake << " " << d.violation << endl;
}

//constructor
Data::Data(string s, string t, string m, int v) {
    state=s;
    vehicleType=t;
    vehicleMake=m;
    violation=v;
}
