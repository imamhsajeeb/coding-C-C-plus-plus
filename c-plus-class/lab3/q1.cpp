#include<iostream>
using namespace std;
class avarege
{
public:
    int avg(int *num)
    {
        int c=0,sum=0,avg,i;
        for(i=1;i<=10&&num[i]!=9999;i++)
        {
            sum=num[i]+sum;
            c++;
        }
        avg=sum/c;
        return avg;
    }
};
int main()
{
    avarege avg1;
    int num[100],i;
    for(i=1;i<=10&&num[i]!=9999;i++)
    {
        cin>>num[i];

    if(num[i]==9999)
    {
        break;
    }
    }
    cout<<avg1.avg(num);
}

