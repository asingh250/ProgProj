#ifdefine CLIENT_H
#define CLIENT_H

#include <string>

class Client
{
public:
  Client();
  Client(std::string name, std::string shortAdress, std::string salesToDate);

  void SetName(std::string name);
  void SetShortAdress(std::string shortAdress);
  void SetSalesToDate(std::string salesToDate);

  std::string GetName();
  std::string GetShortAdress();
  std::string GetSalesToDate();

  void PrintClient();
private:
  std::string name;
  std::string shortAdress;
  std::string salesToDate;
};

#endif