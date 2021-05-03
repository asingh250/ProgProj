#include "../include/client.h"
#include <iostream>
 
using namespace std;
 
Client::Client(string name, string shortAddress)
{
 this->name = name;
 this->shortAddress = shortAddress;
}
 
void Client::setName(string name)
{
 this->name = name;
}
 
void Client::setShortAddress(string shortAddress)
{
 this->shortAddress = shortAddress;
}
 
string Client::getName()
{
 return this->name;
}
 
string Client::getShortAddress()
{
 return this->shortAddress;
}
 
string Client::getInfo()
{
 return getName()+",",getShortAddress();
}
