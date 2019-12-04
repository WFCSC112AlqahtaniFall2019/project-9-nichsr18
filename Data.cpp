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
    return os<<d.license<<" "<<d.state<<" "<<d.plateType<<" "<<d.violation<<endl;
}

//constructor
Data::Data(string l, string s, string p, int v) {
    license=l;
    state=s;
    plateType=p;
    violation=v;
}
