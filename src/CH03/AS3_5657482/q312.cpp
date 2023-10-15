#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    const float YEN_PER_DOLAR = 78.18;
    const float EURO_PER_DOLAR = 0.8235;
    
    float dollar, yen, euro;

    cout<<"Enter the dollar to calculate the exchange rate :";
    cin>>dollar;

    yen = dollar * 78.18;
    euro = dollar * 0.8235;
    
    cout<<"$"<<dollar<<" is "<<yen<<"YEN, "<<euro<<"EURO.";
    return 0;
}