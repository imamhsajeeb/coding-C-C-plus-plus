#include<iostream>
using namespace std;
class s
{
public:

void disp()
{
   int n,i,j,k;
   cin>>n;
   for(i=1;i<=n;i++)
   {
    for(j=n-1;j>=i;j--)
    {
       cout<<" ";
    }
       for(k=1;k<=i;k++)
       {
           cout<<"* ";
       }
       cout<<"\n";
   }
    for(i=n-1;i>=1;i--)
    {
      for(j=i;j<n;j++)
      {
         cout<<" ";
     }
      for(k=i;k>=1;k--)
       {
           cout<<"* ";
       }
       cout<<"\n";
    }
}
};
int main()
{
   s star1;
   star1.disp();

}
