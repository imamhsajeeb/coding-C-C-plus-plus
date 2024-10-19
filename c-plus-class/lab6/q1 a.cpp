#include<iostream>
using namespace std;
template<class t>

class cal{
protected:
    t n;
public:
    cal(t a):n(a)
    {

    }
    cal(){
    n=0;}

};
int main(){
    double x,y;
    char ch;
    cout<<"enter first number : ";
    cin>>x;
    cout<<"enter second number : ";
    cin>>y;
    cout<<"enter operator ( + , - , * , /) :";
    cin>>ch;

cal<double> a(x);
cal<double> b(y);
cal<double> c;

    switch(ch){
case '+':
    cout<<x+y;
    break;

case '-':
    cout<<x-y;
    break;


case '*':
   cout<<x*y;
    break;


case '/':
   cout<<x/y;
    break;
default:
    break;
    }


}

