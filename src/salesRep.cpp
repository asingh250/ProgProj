#include "../include/salesRep.h"
#include <iostream>

using namespace std;


SalesRep::SalesRep(string name, string shortAddress)
{
  this->name = name;
  this->shortAddress = shortAddress;
}

void SalesRep::setName(string name)
{
  this->name = name;
}

void SalesRep::setShortAddress(string shortAddress)
{
  this->shortAddress = shortAddress;
}

string SalesRep::getName()
{
  return this->name;
}

string SalesRep::getShortAddress()
{
  return this->shortAddress;
}

void SalesRep::PrintSalesRep()
{
  cout << getName() << " " << getShortAddress() << endl;
}