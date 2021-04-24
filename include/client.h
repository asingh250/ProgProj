#ifndef CLIENT_H
#define CLIENT_H

#include <string>

using namespace std;

class Client
{
public:
  Client( string shortAddress, string name);

  void setName(string name);
  void setShortAddress(string shortAddress);
  void setSalesToDate(string salesToDate);

  string getSalesToDate();
  string getShortAddress();
  string getName();

  void printClient();
  
private:

  string shortAddress;
  string name;
};

#endif