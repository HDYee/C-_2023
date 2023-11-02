#include <iostream>

using namespace std;


double stockProfitLoss(int, double, double, double, double);

int main()
{
	int   NumOfShares;
	double ProfitLoss,PurchPrice,PurchComm,SalePrice,SaleComm;

	cout << "Enter the number of shares : ";
	cin  >> NumOfShares;
	cout << "Enter the purchase price per share : ";
	cin  >> PurchPrice;
	cout << "Enter the purchase commission paid : ";
	cin  >> PurchComm;
	cout << "Enter is the sale price per share : ";
	cin  >> SalePrice;
	cout << "Enter the sale commission paid : ";
	cin  >> SaleComm;

	ProfitLoss = stockProfitLoss(NumOfShares, PurchPrice, PurchComm, SalePrice,SaleComm);

	cout << "The profit / loss from the sale of stock is $";
	cout << ProfitLoss << endl << endl;

	return 0;
}

double stockProfitLoss(int Ns, double PP, double PC, double SP, double SC)
{
	return ((Ns * SP) - SC) - ((Ns * PP)+ PC);
}