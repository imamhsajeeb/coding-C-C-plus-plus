#include<iostream>
#include<cstring>
#include<new>
using namespace std;
class books
{
    char *str,*str1,*publisher;
    int price,stock_position,a,cd,me;
public:
    books(char *s,char *s1,int p,char *p1,int sto)
    {
        int length=strlen(s);
        str=new char[length+1];
        strcpy(str,s);
        length=strlen(s1);
        str1=new char[length+1];
        strcpy(str1,s1);
        length=strlen(p1);
        publisher=new char[length+1];
        strcpy(publisher,p1);
        price=p;
        stock_position=sto;
    }
    ~books()
    {
        delete[]str;
        delete[]str1;
        delete[]publisher;
    }
    int search_the_book(char *gem,char *pem)
    {
        int length=strlen(gem);
        int c=0;
        for(int i=0; gem[i]!='\0'; i++)
        {
            if(str[i]==gem[i])
            {
                c++;
            }
        }
        int length1=strlen(pem);
        int c1=0,i;
        for(i=0; pem[i]!='\0'; i++)
        {
            if(str1[i]==pem[i])
            {
                c1++;
            }
        }
        if(length==c&&length1==c1)
        {
            cout<< "The requested book is available"<<endl;
            display();
            return 1;
        }
        else
        {
            cout<<  "The requested book is not available"<<endl;
        }
    }
    void display()
    {
        cout<< "Name is:"<<str<<endl;
        cout<< "Author name is:"<<str1<<endl;
        cout<< "Price of the book is: $"<<price<<endl;
        cout<< "The name of the publisher:"<<publisher<<endl;
        cout<< "The stock position of the book is currently at no. "<<stock_position<<endl;
        setvalue();
    }
    void setvalue()
    {
        a=5;
    }
    friend void requested_copies(books b);
};
void requested_copies(books b)
{
    int me;
    cout<< "The number of copies required:";
    cin>>me;
    if(me<=b.a)
    {
        cout<< "Requested copies are available"<<endl;
        cout<< "Total cost is:"<<me*b.price<<endl;
    }
    else
    {
        cout<< "Requested copies are not in stock"<<endl;
    }
}
int main()
{
    books b1("how to program c","deitel",300,"discover",2);
    char *ede,*pge;
    ede=new char[100];
    pge=new char[100];
    cout<< "Input the name of the title customer wants:";
    cin.get(ede,100);
    cin.ignore();
    cout<< "Input the name of the author:";
    cin.get(pge,100);
    int ans=b1.search_the_book(ede,pge);
    if(ans==1)
    {
        b1.setvalue();
        requested_copies(b1);
    }
    delete[]ede;
    delete[]pge;
    return 0;
}

