#ifndef SALE_H
#define SALE_H
#include "client.h"
#include "product.h"
#include "salesRep.h"
#include <string> 

using namespace std;

class Sale
{
	public:

	Sale( string date, Client *client, Product *product, SalesRep *salesRep);

	private:

	string date;
	Client *client;
	Product *product;
	SalesRep *salesRep;


};


#endif