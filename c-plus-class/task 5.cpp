
#include<iostream>
using namespace std;

class mm
{
public:
    void mxmi(int a)
    {
        int c=0,i;
        int e=a;
        for(i=0;e!=0;i++)
        {

            c++;
            e=e/10;

        }
        int pro[c];


        for(i=0;i<c;i++)
        {
            pro[i]=a%10;
            a=a/10;
        }
        for(i=c-1;i>=0;i--)
        {
            cout<<pro[i]<<" ";
        }



    }

};
int main()
{
    mm mm1;
    int x;
    cout<<"enter the number";
    cin>>x;

    mm1.mxmi(x);

}
