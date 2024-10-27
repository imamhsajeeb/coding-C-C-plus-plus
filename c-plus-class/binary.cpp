#include<iostream>
#include <cstdlib>
#include<vector>
#include<time.h>
#include<math.h>
 using namespace std;
 class project
 {
 private :
    int a,b,c,d,p,i,j,pos,n,first,last,middle;
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
    cout<<endl;
    cout<<endl;

    double start_s=clock();
    int ele1(rand()%a);

    cout<<"element to be searched: "<<endl;
    cout<<ele1<<endl;
    first = 0;
	last = a-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr1[middle] < ele1)
		{
			first = middle + 1;

		}
		else if(arr1[middle] == ele1)
		{
			cout<<ele1<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<ele1<<" is not present in the list.";
	}
	double stop_s=clock();
	cout<<endl;

	cout << "binary search computational time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000000000<< endl;
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
    first = 0;
	last = b-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr2[middle] < ele2)
		{
			first = middle + 1;

		}
		else if(arr2[middle] == ele2)
		{
			cout<<ele2<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<ele2<<" is not present in the list.";
	}
	double stop_s=clock();
	cout<<endl;

	cout << "binary search computational time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000000000<< endl;
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

    first = 0;
	last = c-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr3[middle] < ele3)
		{
			first = middle + 1;

		}
		else if(arr3[middle] == ele3)
		{
			cout<<ele3<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<ele3<<" is not present in the list.";
	}
	double stop_s=clock();
	cout<<endl;

	cout << "binary search computational time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000000000<< endl;

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
    first = 0;
	last = d-1;
	middle = (first+last)/2;
	while (first <= last)
	{
		if(arr4[middle] < ele4)
		{
			first = middle + 1;

		}
		else if(arr4[middle] == ele4)
		{
			cout<<ele4<<" found at location "<<middle+1<<"\n";
			break;
		}
		else
		{
			 last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(first > last)
	{
		cout<<"Not found! "<<ele4<<" is not present in the list.";
	}
	double stop_s=clock();
	cout<<endl;

	cout << "binary search computational time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000000000<< endl;


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


