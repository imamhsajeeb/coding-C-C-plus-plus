#include<iostream>
using namespace std;
class eao
{
public:
	void diseven()
	{
		cout << "It's Even.\n";
	}
	void disodd()
	{
		cout << "It's Odd.\n";
	}
};
int main()
{
	eao eo;
	int num;
	cin >> num;
	if (num % 2 == 0)
	{
		eo.diseven();
	}
	else if (num%2 != 0)
	{
		eo.disodd();
	}
	system("pause");
	return 0;
}