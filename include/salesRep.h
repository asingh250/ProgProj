#ifndef SALESREP_H
#define SALESREP_H
 
#include <string>
 
using namespace std;
 
class SalesRep
{
public:
 SalesRep(string name, string shortAddress);
 
 void setName(string name);
 void setShortAddress(string shortAddress);
 
 string getName();
 string getShortAddress();
 string getInfo();
 float getBonus();
 
 private:
    
    float bonus;
    string name;
    string shortAddress;
};
 
#endif
