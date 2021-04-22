#include "client.h"
#include <iostream>
#include <iomanip>

using namespace std;

Client::Client()
{
  name = "noName";
  shortAdress = "noAdress";
  salesToDate = "noSalesToDate";
}

Client::Client(string name, string shortAdress, string salesToDate)
{
  this->name = name;
  this->shortAdress = shortAdress;
  this->salesToDate = salesToDate;
}

void Client::SetName(string name)
{
  this->name = name;
}

void Client::SetShortAdress(string shortAdress)
{
  this->shortAdress = shortAdress;
}

void Client::SetSalesToDate(string salesToDate)
{
  this->salesToDate = salesToDate;
}

string Client::GetName()
{
  return this->name;
}

string Client::GetShortAdress()
{
  return this->shortAdress;
}

string Client::GetSalesToDate()
{
  return this->salesToDate;
}

void Client::PrintClient()
{
  cout << GetName() << " " << GetShortAdress() << " " << GetSalesToDate() << endl;
}