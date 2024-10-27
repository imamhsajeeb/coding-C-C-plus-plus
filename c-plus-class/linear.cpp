#include<iostream>
#include <cstdlib>
#include<vector>
#include<time.h>
#include<math.h>
 using namespace std;
 class project
 {
 private :
    int a,b,c,d,p,i,j,pos,n;
    vector<long long> arr1,arr2,arr3,arr4;
public:
    void setf();
    void setA();
    void setB();
    void setC();
    void setD();
 };
 void project::setf()
 {
    cout<<"enter the size of the A , B , C , D set:"<<endl;
    cin>>a>>b>>c>>d;
 }

 void project :: setA()
 {

     for(i=1;i<=a;i++)
    {
        arr1.push_back(i);
    }
    for(i=1;i<=a;i++)
    {
        arr1.push_back(rand()%a);
    }
    cout<<"set A = ";
    for(i=0; i<a; i++)
    {
        cout<<arr1[i]<<" ";
    }
    double start_s=clock();


    int ele1(rand()%a);

    cout<<"element to be searched: "<<endl;
    cout<<ele1<<endl;

    int p=0;
    for(i=0; i<a; i++)
	{
		if(arr1[i]==ele1)
		{
			p=1;
			pos=i+1;
			break;
		}
	}

	if(p==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<ele1<<" found at position "<<pos;
	}
	cout<<endl;
double stop_s=clock();
	cout << "linear search computational time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000000000<< endl;

    cout<<endl;
    cout<<endl;
 }

 void project :: setB()
 {

    for(i=1;i<=b;i++)
    {
        arr2.push_back(i);
    }
    for(i=1;i<=b;i++)
    {
        arr2.push_back(rand()%b);
    }
    cout<<"set B = ";
    for(i=0; i<b; i++)
    {
        cout<<arr2[i]<<" ";
    }
     double start_s=clock();


    int ele2(rand()%b);

    cout<<"element to be searched: "<<endl;
    cout<<ele2<<endl;

    int p=0;
    for(i=0; i<b; i++)
	{
		if(arr2[i]==ele2)
		{
			p=1;
			pos=i+1;
			break;
		}
	}

	if(p==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<ele2<<" found at position "<<pos;
	}
	cout<<endl;
double stop_s=clock();
	cout << "linear search computational time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000000000<< endl;


    cout<<endl;
    cout<<endl;
 }


 void project :: setC()
 {


    for(i=1;i<=c;i++)
    {
        arr3.push_back(i);
    }
    for(i=1;i<=c;i++)
    {
        arr3.push_back(rand()%c);
    }
    cout<<"set C = ";
    for(i=0; i<c; i++)
    {
        cout<<arr3[i]<<" ";
    }
    double start_s=clock();
    int ele3(rand()%c);

    cout<<"element to be searched: "<<endl;
    cout<<ele3<<endl;

    int p=0;
    for(i=0; i<c; i++)
	{
		if(arr3[i]==ele3)
		{
			p=1;
			pos=i+1;
			break;
		}
	}

	if(p==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<ele3<<" found at position "<<pos;
	}
	cout<<endl;
double stop_s=clock();
	cout << "linear search computational time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000000000<< endl;


    cout<<endl;
    cout<<endl;
 }

    void project :: setD()
{

    for(i=1;i<=d;i++)
    {
        arr4.push_back(i);
    }
    for(i=1;i<=d;i++)
    {
        arr4.push_back(rand()%d);
    }
    cout<<"set D = ";
    for(i=0; i<d; i++)
    {
        cout<<arr4[i]<<" ";
    }

    double start_s=clock();
    int ele4(rand()%d);

    cout<<"element to be searched: "<<endl;
    cout<<ele4<<endl;

    int p=0;
    for(i=0; i<d; i++)
	{
		if(arr4[i]==ele4)
		{
			p=1;
			pos=i+1;
			break;
		}
	}

	if(p==0)
	{
		cout<<"Number not found..!!";
	}
	else
	{
		cout<<ele4<<" found at position "<<pos;
	}
	cout<<endl;
double stop_s=clock();
	cout << "linear search computational time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000000000<< endl;


    cout<<endl;
    cout<<endl;


}

int main()
{
    project l1;
    l1.setf();
    l1.setA();
    l1.setB();
    l1.setC();
    l1.setD();
}
