#include "../include/sale.h"
#include "../include/product.h"
#include "../include/client.h"
#include "../include/salesRep.h"

#include <iostream>

Sale::Sale( string date, Client *client, Product *product, SalesRep *salesRep){
	
	this->client = client;
	this->date = date;
	this->product = product;
	this->salesRep = salesRep;
}


using namespace std;