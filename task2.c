#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,j,slen,count;
    gets(s);
    slen=strlen(s);
    for(i=0;i<slen;i++){
        count=0;
        for(j=0;j<slen;j++){
            if( s[i]==s[j] )
                count++;
        }
        printf("%c = %d \n",s[i],count);

    }

return 0;
}
