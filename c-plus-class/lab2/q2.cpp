#include<iostream>
using namespace std;
class date
{
private:
    int month,day,year;
public:
    date(int a,int b,int c)
    {
        setmonth(a);
        setday(b);
        setyear(c);
    }
    void setmonth(int a)
    {
        if(a>=1 && a<=12)
        {
            month=a;
        }
        else
            month=1;
    }
    void setday(int b)
    {
        day=b;
    }
    void setyear(int c)
    {
        year=c;
    }
    int getmonth()
    {
        return month;
    }
    int getday()
    {
        return day;
    }
    int getyear()
    {
        return year;
    }
    void displaydate()
    {
        cout<<"Original date:"<<endl;
        cout<<getmonth()<<"/"<<getday()<<"/"<<getyear()<<endl;
    }
};
int main()
{
    date date1(4,26,1998);
    cout<<"Month: "<<date1.getmonth()<<endl;
    cout<<"Day: "<<date1.getday()<<endl;
    cout<<"year: "<<date1.getyear()<<endl<<endl;
    date1.displaydate();
}
