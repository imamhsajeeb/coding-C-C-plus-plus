#include<iostream>
using namespace std;
class factorial{
public:
float exponential(int n, float x);

};
int main(){
factorial fact;
float x=1.0;
int n;
cin>>n;
cout<<fact.exponential(n,x);
return 0;
}
float factorial::exponential(int n, float x)
{
    float sum = 1.0;

    for (int i = n - 1; i > 0; --i )
        sum = 1 + x * sum / i;

    return sum;
}
