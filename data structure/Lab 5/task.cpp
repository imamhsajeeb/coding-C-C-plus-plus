#include<iostream>

using namespace std;

int sum(int x)
{
    if(x==5)
    {
        return x;
    }
    else
    {

        return x+sum(x+1);
    }
}

int main()
{
    cout<<sum(1);

    return 0;
}
