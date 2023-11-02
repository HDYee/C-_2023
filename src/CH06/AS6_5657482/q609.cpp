#include <iostream>
using namespace std;

bool isPrime(int);

int main()
{
	int num;

        cout<<"Enter a number: ";
		cin >> num;

	cout << "The number " << num;

	if (isPrime(num))
	{
		cout << " is a Prime number." << endl;
	}
	else
		cout << " is not a Prime number." << endl;

	return 0;
}

bool isPrime(int num)
{
	if (num > 1)
	{
		for (int i = 2; i <= num; ++i)
		{
			
			if (num % i == 0)
			{
				if(num == i)
					return true;
				else
					return false;
			}
	
		}
	}
	return false;
}