#include<iostream>
using namespace std;
template<class t>

class num{
protected:
    t n;
public:
    num(t a):n(a)
    {

    }
    num(){
    n=0;}
    num operator+(num &a){
    num x;
    x.n=n+a.n;
    return x;
    }

    num operator-(num &a){
    num x;
    x.n=n-a.n;
    return x;
    }

    num operator*(num &a){
    num x;
    x.n=n*a.n;
    return x;
    }

    num operator/(num &a){
    num x;
    x.n=n/a.n;
    return x;
    }
    void show(){
    cout<<"result ="<<n;
    }
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

num<double> a(x);
num<double> b(y);
num<double> c;

    switch(ch){
case '+':
    c=a+b;
    c.show();
    break;

case '-':
    c=a-b;
    c.show();
    break;


case '*':
    c=a*b;
    c.show();
    break;


case '/':
    c=a/b;
    c.show();
    break;
default:
    break;
    }


}
