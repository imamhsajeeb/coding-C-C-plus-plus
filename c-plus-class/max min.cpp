#include<iostream>
using namespace std;
class mn
{
public:
	void maxmin(int m, int n)
	{
		cout << "Maximum= " << m << "\nMinimum= " << n<<endl;
	}
};
int main()
{
	mn ob;
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	if (n1 > n2 && n1 > n3)
	{
		if (n2 > n3)
			ob.maxmin(n1, n3);
		else
			ob.maxmin(n1, n2);
	}
	else if (n2 > n1 && n2 > n3)
	{
		if (n1 > n3)
			ob.maxmin(n2, n3);
		else
			ob.maxmin(n2, n1);
    }
	else if (n3 > n1 && n3 > n2)
	{
		if (n1 > n2)
			ob.maxmin(n3, n2);
		else
			ob.maxmin(n3, n1);
    }
	system("pause");
	return 0;
}