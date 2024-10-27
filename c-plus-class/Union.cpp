#include<iostream>
using namespace std;
#include<cmath>
#include <cstdlib>
#include <ctime>
unsigned long long int U[8][1000000],Ub[8][1000000],A[8][1000000],B[8][1000000],Ab[8][1000000],Bb[8][1000000],n,c=0;
unsigned long long int BwA[8][1000000],BwB[8][1000000],AUBb[8][1000000],AnBb[8][1000000];

long long int convert(long long int b)
{
    if(b==0)
    {
        return 0;
    }
    else
    {
        return (b % 2+10*convert(b/2));
    }
}
main()
{
    cin>>n;
    int i=1;
    for(int j=1; j<=n; j++)
    {
        U[i][j]=j;
        Ub[i][j]=convert(U[i][j]);
    }
    for(int j=1; j<=n; j++)
    {
        cout<<U[i][j]<<"\t"<<Ub[i][j]<<endl;
    }
double start_s=clock();
    for(int j=1; j<=n; j++)
    {
        A[i][j]=rand()% n + 1;
        Ab[i][j]=convert(A[i][j]);
    }


    for(int j=1; j<=n; j++)
    {
        B[i][j]=rand()% n + 1;
        Bb[i][j]=convert(B[i][j]);
    }
    for(int j=1; j<=n; j++)
    {
        BwA[i][j]=A[i][j]%2;
        BwB[i][j]=B[i][j]%2;
    }

    for(int l=1; l<=n; l++)
    {
        if(BwA[i][l]==1||BwB[i][l]==1)
        {
            AUBb[i][l]=1;
            c=1;
        }
        if(c==0)
        {
            AUBb[i][l]=0;
        }
    }
double stop_s=clock();

cout<<"Bite wise A"<<"\t\t\t"<<"Bite wise B"<<"\t"<<"AUB"<<endl;
    for(int j=1; j<=n; j++)
    {
        cout<<BwA[i][j]<<"\t\t\t\t"<<BwB[i][j]<<"\t\t"<<AUBb[i][j]<<endl;
    }
    cout << "AUB time in ns: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000000000<< endl;
    }
