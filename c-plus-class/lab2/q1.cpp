#include<iostream>
using namespace std;
class employee
{
private:
    string firstname,lastname;
    int salary;
public:
    employee(string,string,int);
    void setfname(string);
    void setlname(string);
    void setsalarym(int);
    string getfname();
    string getlname();
    int getsalarym();
};
employee::employee(string x,string y,int a)
{
    setfname(x);
    setlname(y);
    setsalarym(a);
}
void employee::setfname(string x)
{
    firstname=x;
}
void employee::setlname(string y)
{
    lastname=y;
}
void employee::setsalarym(int a)
{
    if(a<0)
    {
        salary=0;
    }
    else
    {
        salary=a;
    }
}
string employee::getfname()
{
    return firstname;
}
string employee::getlname()
{
    return lastname;
}
int employee::getsalarym()
{
    return salary;
}
int main()
{
    employee employee1("Lisa","Roberts",54000);
    employee employee2("Mark","Stein",48000);
    cout<<"Employee's yearly salaries:"<<endl;
    cout<<employee1.getfname()<<" "<<employee1.getlname()<<": $"<<employee1.getsalarym()<<endl;
    cout<<employee2.getfname()<<" "<<employee2.getlname()<<": $"<<employee2.getsalarym()<<endl<<endl;
    int s1,s2,raise1,raise2;
    s1=employee1.getsalarym();
    s2=employee2.getsalarym();
    raise1=((s1*0.1)+s1)*12;
    raise2=((s1*0.1)+s2)*12;
    cout<<"Employee yearly salaries after 10% raise:"<<endl;
    cout<<employee1.getfname()<<" "<<employee1.getlname()<<": $"<<raise1<<endl;
    cout<<employee2.getfname()<<" "<<employee2.getlname()<<": $"<<raise2<<endl<<endl;



}

