#include<iostream>
#include<string>
#include<cstring>
#include<iomanip>
using namespace std;
class staff
{
protected:
    int code;
    string name,name1;
public:
    void teacherputcodename()
    {
        cout<<"enter name: ";
        getline(cin,name);
        cout<<"enter code: ";
        cin>>code;
        cin.ignore();
    }
    void typistputcodename()
    {
        cout<<"enter name: ";
        getline(cin,name1);
        cout<<"enter code: ";
        cin>>code;
        cin.ignore();
    }
    string teachergivename()
    {
        return name;
    }
    int givecode()
    {
        return code;
    }
    string typistgivename()
    {
        return name1;
    }

};
class teacher:public staff
{
protected:
    string subject,publication;
public:
    void getsubname()
    {
        cout<<"enter the name of the subject teacher is teaching: ";
        getline(cin,subject);
        cout<<"enter the name of book publication: ";
        getline(cin,publication);
    }
    string givesubject()
    {
        return subject;
    }
    string givepub()
    {
        return publication;
    }
};
class typist:public staff
{
protected:
    int time,page;
public:
    int gettime()
    {
        cout<<"enter the time "<<typistgivename()<<" take to finish one page";
        cin>>time;
        return time;
    }
};
class officer:public staff
{
protected:
    string name2;
    int code2;
public:
    void officernamecode()
    {
        cout<<"enter the name of the officer: ";
        getline(cin,name2);
        cout<<name2<<"'s code number: ";
        cin>>code2;
    }
    void officerprint()
    {
        cout<<"the name of the officer is: "<<name2<<endl;
        cout<<"and his code number: "<<code2<<endl;
    }

};
class regular:public typist
{
protected:
    int salary;
public:
    void justsalary()
    {
        cout<<"enter the salary of a regular typist: ";
        cin>>salary;
    }
    int getregsalary()
    {
        return salary;
    }
};
class casual:public typist
{
protected:
    int days,salary=50,salary2;
public:
    void show()
    {
        cout<<"how many days: ";
        cin>>days;
        salary2=days*salary;
    }
    int getcasualsalary()
    {
    return salary2;
    }
};
int main()
{
    teacher t; typist t1; officer o; regular r; casual c;
    int choose;
    cout<<"teacher name and code: ";
    t.teacherputcodename();
    t.getsubname();
    cout<<"enter the typist name and code: ";
    t1.typistputcodename();
    o.officernamecode();
    cout<<t.teachergivename()<<" is a teacher of "<<t.givesubject()<<" and teacher from this "<<t.givepub()<<"'s books "<<endl;
    o.officerprint();
    cout<<t1.typistgivename()<<" is a typist and his code is "<<t1.givecode()<<endl;
    cout<<t1.typistgivename()<<" takes "<<t1.gettime()<<" second to finish 1 page typing "<<endl;
    cout<<"just choose what kind of typist is"<<t1.typistgivename()<<endl;
    cout<<"press 1 if "<<t1.typistgivename()<<" is a regular or for casual type anything";
    cin>>choose;
    if(choose==1)
    {
        r.justsalary();
        cout<<t1.typistgivename()<<" salary is "<<r.getregsalary()<<endl;

    }
    else{
        c.show();
        cout<<t1.typistgivename()<<" is salary is "<<c.getcasualsalary();
    }
    return 0;

}
