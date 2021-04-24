#ifndef PRODUCT_H
#define PRODUCT_H

#include <string> 

using namespace std;

class Product
{
public: 
  Product(string color, float price);
  void setDiscount ( float discount);
  float getDiscount ();
  float getPrice();

private:

string color;
float discount;
float price;


};


#endif