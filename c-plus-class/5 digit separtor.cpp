#include <iostream>
using namespace std;

class check
{
public:
    void separate()
    {
        int num;

         cout << "Enter a five-digit number: ";
         cin >> num;

         cout << num / 10000 << " ";
         num = num % 10000;
         cout << num / 1000 << " ";
         num = num % 1000;
         cout << num / 100 << " ";
         num = num % 100;
         cout << num / 10 << " ";
         num = num % 10;
         cout << num << endl;
    }
};


int main()
{
    check obj;
    obj.separate();
	system("pause");
	return 0;
}