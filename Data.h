//
// Created by Sarah Nicholls on 12/3/19.
//

#ifndef PROJECT9_DATA_H
#define PROJECT9_DATA_H
#include<iostream>
#import<string>
using namespace std;
class Data{
public:

    string state;
    string vehicleType;
    string vehicleMake;
    string violationTemp;
    int violation;
    friend ostream& operator<<(ostream& os, const Data& d);
    bool operator<(const Data &rhs);
    bool operator<=(const Data &rhs);
    Data(string s= "", string t="", string m="", int v=0);

};

#endif //PROJECT9_DATA_H
