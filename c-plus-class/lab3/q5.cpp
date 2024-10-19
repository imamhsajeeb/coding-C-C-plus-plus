#include<iostream>
#include<iomanip>
using namespace std;
class wh
{
    float h,r=10.0;
public:
    void display()
    {   cout<<"Enter hours worked(-1 to end):"<<endl;
        cin>>h;

        cout<<fixed<<showpoint<<setprecision(2);
        while(h!=-1)
        {
        cout<<"enter hourly rate of the employee($00.00):10.00"<<endl;
        if(h>=1&&h<=40)
        {
        cout<<"salary is $"<<(h*r)<<endl;
        }
        else if(40<h)
        {
            cout<<"salary is $"<<(40.00*r+(h-40.00)*r*1.5)<<endl;
        }
        cout<<"Enter hours worked(-1 to end):"<<endl;
        cin>>h;
        }
    }
};
int main()
{
    wh employee;
    employee.display();
}
