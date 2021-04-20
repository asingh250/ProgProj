#include <iostream>

int main() {
  std::cout << "Hello World!\n";
}
/*

Pseudocode:

	Classes:

		Clients - name, short address.
		SalesReps - name, short address, calculated sales bonus.
		Products - product/service name, and any current discount. 
		Sales - product, date, client, salesRep.

	Main:

		vector <Client*> clients;
		vector <SalesRep*> salesReps;
		vector <Product*> products;
		vector <Sale*> Sales;

		retrieveInfo(){ ...retrieve file info and populate vectors… }
		updateInfo(){ ...write all info from vector objects to files… }
		listAll(){ ...prints info for all items in a specified vector… }
		listIndividual(){ ...lists info on a specific element in a specific vector… }
		monthlySales(){ ...generate monthly sales report from sales vector…}
		purchase(){ ... input info to make new sale object and append to Sales vector… }

		printMenu(){ 
		(use try/throw blocks)
		...print the menu and wait for response… 
		…uses above functions in switch statements to display/edit data... }
		main(){
		...call print menu in while loop...
		}
*/