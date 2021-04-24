#ifndef SALESMANAGER_H
#define SALESMANAGER_H
// #include "salesRep.h"
// #include "client.h"
// #include "product.h"
#include <algorithm>
#include "sale.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>


using namespace std;

vector <Client*> clients;
vector <Product*> products;
vector <Sale*> sales;
vector <SalesRep*> salesReps;

string folder = "./sales/";
string clientsFileName = "clients";
string productsFileName = "products";
string salesFileName = "sales";
string salesRepsFileName = "salesReps";

vector <vector<string>> parseFile(ifstream &f){
	
	string input;
	vector <vector <string>> vv;
	while(getline(f, input)){
		string s;
		vector <string> v;
		istringstream ssi(input);
		while(getline(ssi, s,',')){
			remove_if(s.begin(), s.end(), ::isspace);
			v.push_back(s);
		}
		vv.push_back(v);
	}
	return vv;
}

void loadClients(){
	string fname = folder+clientsFileName+".txt";
	ifstream fin(fname);
	if (!fin){ cerr << "Could not open "<< fname << endl;
	}else{
		for(auto i: parseFile(fin)){
			clients.push_back(new Client(i[0], i[1]));
		}
	}
	fin.close();
}

void loadProducts(){
	string fname = folder+productsFileName+".txt";
	ifstream fin(fname);
	if (!fin){ cerr << "Could not open "<< fname << endl;
	}else{
		for(auto i: parseFile(fin)){
			products.push_back(new Product(i[0], stof(i[1])));
		}
	}
	fin.close();
}

void loadSales(){
	string fname = folder+salesFileName+".txt";
	ifstream fin(fname);
	if (!fin){ cerr << "Could not open "<< fname << endl;
	}else{
		for(auto i: parseFile(fin)){
			//TODO:
			//figure out how to load sales
			// sales.push_back(new Sale(i[0], i[1], i[2], i[3]));
		}
	}
	fin.close();
}

void loadSalesReps(){
	string fname = folder+salesRepsFileName+".txt";
	ifstream fin(fname);
	if (!fin){ cerr << "Could not open "<< fname << endl;
	}else{
		for(auto i: parseFile(fin)){
			
			//salesReps.push_back(new SalesRep(...));
		}
	}
	fin.close();
}


void loadInfo(){
		loadClients();
		loadProducts();
		loadSales();
		loadSalesReps();
}






#endif