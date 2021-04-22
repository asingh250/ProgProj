#ifdefine SALESREP_H
#define SALESREP_H

#include <string> 

class SalesRep
{
public:
  SalesRep();
  SalesRep(std::string name, std::string shortAdress, std::string salesToDate);

  void SetName(std::string name);
  void SetShortAdress(std::string shortAdress);
  void SetSalesToDate(std::string salesToDate);

  std::string GetName();
  std::string GetShortAdress();
  std::string GetSalesToDate();

  void PrintSalesRep();
private:
  std::string name;
  std::string shortAdress;
  std::string salesToDate;
};

#endif