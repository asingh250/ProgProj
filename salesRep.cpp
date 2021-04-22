#include "salesRep.h"
#include <iostream>

using namespace std;

SalesRep::SalesRep()
{
  name = "noName";
  shortAdress = "noAdress";
  salesToDate = "noSalesToDate";
}

SalesRep::SalesRep(string name, string shortAdress, string saleToDate)
{
  this->name = name;
  this->shortAdress = shortAdress;
  this->salesToDate = salesToDate;
}

void SalesRep::SetName(string name)
{
  this->name = name;
}

void SalesRep::SetShortAdress(string shortAdress)
{
  this->shortAdress = shortAdress;
}

void SalesRep::SetSalesToDate(string salesToDate)
{
  this->salesToDate = salesToDate;
}

string SalesRep::GetName()
{
  return this->name;
}

string SalesRep::GetShortAdress()
{
  return this->shortAdress;
}

string SalesRep::GetSalesToDate()
{
  return this->salesToDate;
}

void SalesRep::PrintSalesRep()
{
  cout << GetName() << " " << GetShortAdress() << " " << GetSalesToDate() << endl;
}