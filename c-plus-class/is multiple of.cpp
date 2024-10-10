#include<iostream>
using namespace std;
class num
{
public:
	void display(int a,int b)
	{
		if(a%b==0)
		{
			cout<<a<<" is multiple of "<<b<<endl
				;
		}
		else
		{
			cout<<a<<" is not multple of "<<b<<endl;
		}
	}
};
int main()
{
	num ob;
	int n1,n2;
	cout<<"Enter two integers: ";
	cin>>n1>>n2;
	ob.display(n1,n2);


	return 0;
}
