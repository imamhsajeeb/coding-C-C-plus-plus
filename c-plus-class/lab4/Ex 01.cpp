#include<iostream>
#include<cstring>
#include<new>
#include<string>
using namespace std;
class sample
{
    int c=1;
    char *string2;
public:
    void just_set_it(char *soj)
    {
        string2=soj;
    }
    void number_of_words(char *string1)
    {
        for(int i=0; string1[i]!='\0'; i++)
        {
            if(string1[i]==' ')
            {
                c++;
            }
        }
        cout<< "Number of words:"<<c<<endl;
    }
    void reverse_order(char *string1)
    {
        int p=strlen(string1)-1;
        int index=p;
        int hold;
        char last= '\0';
        while(index>=0)
        {
            while(index>=0&&string1[index]!=' ')
            {
                index--;
            }
            hold=index-1;
            index++;
            while(string1[index]!=last)
            {
                cout<<string1[index];
                index++;
            }
            index=hold;
            last=' ';
            if(index>=0)
            {
                cout<< " ";
            }
        }
    }
    void get_vowel_consonent(char *string1)
    {
        int c=0,d=0;
        for(int i=0;string1[i]!='\0';i++)
        {
            if(string1[i]=='a'||string1[i]=='e'||string1[i]=='A'||string1[i]=='E'||string1[i]=='i'||string1[i]=='I'||string1[i]=='o'||string1[i]=='O'||string1[i]=='u'||string1[i]=='U')
            {
                 c++;
            }
            else if(string1[i]!=' '&&string1[i]>=65&&string1[i]<=122)
            {
                d++;
            }
        }
        cout<< "VOWEL = "<<c<< " and CONSONANT="<<d<<endl;
    }
    friend void reverse_orderc(sample s3);
};
void reverse_orderc(sample s3)
{
    int m=strlen(s3.string2)-1;
    for(int i=m;i>=0;i--)
    {
        cout<<s3.string2[i];
    }
}
int main()
{
    sample s2;
    char *s1;
    s1=new char [100];
    cout<< "Enter a text:";
    cin.get(s1,100);
    s2.just_set_it(s1);
    s2.number_of_words(s1);
    cout<<endl;
    cout<< "Reverse order(word-by-word):";
    s2.reverse_order(s1);
    cout<<endl<<endl;
    cout<< "Reverse order(character-by-character):";
    reverse_orderc(s2);
    cout<<endl<<endl;
    s2.get_vowel_consonent(s1);
    cout<<endl;
    delete[]s1;
    return 0;
}

