#ifndef SALESMANAGER_H
#define SALESMANAGER_H
#include <algorithm>
#include "sale.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
 
//Sales manager class is in charge of printing the menu
//also contains the switch statement for the menu,
// and the functions that get called for each option to
//print and manipulate the information regarding sales,
//clients, products, sales reps... etc
 
using namespace std;
 
//menu
string menu ="\nMENU\n"
            "a - Add sales representative\n"
            "c - List clients\n"
            "s - List sales representatives\n"
            "m - List monthly sales\n"
            "i - Output items' descriptions\n"
            "o - Output shopping cart\n"
            "q - Quit\n"
            "\n"
            "Choose an option:";
 
 
 
int clientsVersion, productsVersion, salesVersion, salesRepsVersion;
 
//vectors that store lists of all clients, products, sales, and salesReps
vector <Client*> clients;
vector <Product*> products;
vector <Sale*> sales;
vector <SalesRep*> salesReps;
 
//file names
string folder = "./sales/";
string clientsFileName = folder + "clients.txt";
string productsFileName = folder+"products.txt";
string salesFileName = folder+"sales.txt";
string salesRepsFileName = folder+"salesReps.txt";
 
 
//parses files into vectors of strings to use for loading vectors
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
 
//loads the clients vector
void loadClients(){
    string fname = clientsFileName;
    ifstream fin(fname);
    if (!fin){ cerr << "Could not open "<< fname << endl;
    }else{
        for(auto i: parseFile(fin)){
            clients.push_back(new Client(i[1], i[0]));
            cout<<i[0]+" "+i[1]<<endl;
        }
    }
    fin.close();
}
 
template<typename T>
void saveVector(vector<vector < T *>> t, string fname){
    ofstream fout(fname);
    if (!fout){ cerr << "Could not open "<< fname << endl;
    }else{
        for(auto i: t){
            for (auto j: i){
                fout<<i.getInfo();
            }
            fout<<"\n";
        }
    }
    fout.close();
}
 
//loads the products vector
void loadProducts(){
    string fname = productsFileName;
    ifstream fin(fname);
    if (!fin){ cerr << "Could not open "<< fname << endl;
    }else{
        for(auto i: parseFile(fin)){
            products.push_back(new Product(i[0], stof(i[1])));
        }
    }
    fin.close();
}
 
//loads the sales vector
void loadSales(){
    string fname = salesFileName;
    ifstream fin(fname);
    if (!fin){ cerr << "Could not open "<< fname << endl;
    }else{
        for(auto i: parseFile(fin)){
 
        }
    }
    fin.close();
}
 
//loads the salesReps vector
void loadSalesReps(){
    string fname = salesRepsFileName;
    ifstream fin(fname);
    if (!fin){ cerr << "Could not open "<< fname << endl;
    }else{
        for(auto i: parseFile(fin)){
 
        }
    }
    fin.close();
}
 
//calles all of the above load functions
void retrieveInfo(){
        loadClients();
        loadProducts();
        loadSales();
        loadSalesReps();
}
 
void updateInfo(){
    // saveVector(&clients, clientsFileName);
    // saveVector(&products, productsFileName);
    // saveVector(&sales, salesFileName);
    // saveVector(&salesReps, salesRepsFileName);
}
 
//prints menu and calls functions for each case
void printMenu(){
 
    char c;
    do{
        cout<<menu<<endl;
        
        cin>>c;
        
        switch(c){
            case 'Q':
            case 'q':
            break;
 
            case 'A':
            case 'a':
 
            break;
 
            case 'C':
            case 'c':
                for (auto i: clients){
                    cout<<i->getInfo();
                }
            break;
 
            case 'S':
            case 's':
            break;
 
            case 'M':
            case 'm':
            break;
 
            case 'I':
            case 'i':
            break;
 
            case 'O':
            case 'o':
            break;
 
            default:
                cout<<endl<<"invalid input"<<endl;
                
        }
 
 
    }while(c!='q');
}
 
 
#endif
