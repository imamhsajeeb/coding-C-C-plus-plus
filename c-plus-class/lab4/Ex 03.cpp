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
    void teacher_put_codename()
    {
        cout<< "Enter the name:";
        getline(cin,name);
        cout<< "Enter the code:";
        cin>>code;
        cin.ignore();
    }
    void typist_put_codename()
    {
        cout<< "Enter the name:";
        getline(cin,name1);
        cout<< "Enter the code:";
        cin>>code;
        cin.ignore();
    }
    string give_name_teacher()
    {
        return name;
    }
    string give_name_typist()
    {
        return name1;
    }
    int give_code()
    {
        return code;
    }
};
class teacher:public staff
{
    protected:
    string subject,publication,ans;
    int ans1;
public:
    void give_subject_name()
    {
        cout<< "Enter the name of the subject teacher is teaching:";
        getline(cin,subject);
        cout<< "Enter the name of the book's publication:";
        getline(cin,publication);
    }
    string get_subject()
    {
        return subject;
    }
    string get_publication()
    {
        return publication;
    }

};

class typist:public staff
{
protected:
    int time,page;
public:
    int get_time()
    {
        cout<< "Enter the amount of time "<<give_name_typist()<< " takes to finish one page:";
        cin>>time;
        return time;
    }
};
class officer:public staff
{
protected:
    string val1,val2;
    int gfe;
public:
    void grade_officer()
    {
        cout<< "Enter the name of the officer:";
        getline(cin,val1);
        cout<<val1 <<"'s code number is:";
        cin>>gfe;
    }
    void just_print()
    {
        cout<< "The name of the officeer is:"<<val1<<endl;
        cout<< "And his code number is:"<<gfe<<endl;
    }
};
class regular:public typist
{
protected:
    int salary;
public:
    void just_salary()
    {
        cout<< "Enter the salary of a regular typist:";
        cin>>salary;
    }
    int get_regular_salary()
    {
        return salary;
    }
};
class casual:public typist
{
protected:
    int days,salary1=50,salary2;
public:
    void show()
    {
        cout<< "How many days:";
        cin>>days;
        salary2=days*salary1;
    }
    int get_casual_salary()
    {
        return salary2;
    }
};
int main()
{
    teacher t;
    typist t1;
    officer ob;
    regular r;
    casual c;
    int choose;
    cout<< "Enter the teacher's name and code"<<endl;
    t.teacher_put_codename();
    t.give_subject_name();
    cout<< "Enter the typist's name and code"<<endl;
    t1.typist_put_codename();
    ob.grade_officer();
    cout<<t.give_name_teacher()<< " is a teacher and his code is "<<t.give_code()<<endl;
    cout<<t.give_name_teacher()<< " is a teacher of "<<t.get_subject()<< " and teaches from this "<<t.get_publication()<< "'s book "<<endl;
    ob.just_print();
    cout<<t1.give_name_typist()<< " is a typist and his code is "<<t1.give_code()<<endl;
    cout<<t1.give_name_typist()<< " takes "<<t1.get_time()<< " minutes to finish 1 page typing"<<endl;
    cout<< "Just choose what kind pf typist is "<<t1.give_name_typist()<<endl;
    cout<< "Press 1 if "<<t1.give_name_typist()<< " is a regular typist or else type anything:";
    cin>>choose;
    if(choose==1)
    {
        r.just_salary();
        cout<<t1.give_name_typist()<< " 's salary is:"<<r.get_regular_salary()<<endl;
    }
    else
    {
        c.show();
        cout<<t1.give_name_typist()<< " 's salary is:"<<c.get_casual_salary()<<endl;
    }
    return 0;
}

