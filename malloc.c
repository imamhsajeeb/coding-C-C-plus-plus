#include<stdio.h>
#include<stdlib.h>
void main()
{ int *ptr,  i, num;
scanf("%d",&num);
ptr=(int*)malloc(num*sizeof(int));
if(ptr==NULL){           // if memory isn’t available, malloc returns null
    printf("Out of memory\n");
     }
for(i=0;i<num;i++)
    scanf("%d", ptr+i);
for(i=0; i<num; i++)
    printf("%d %d\n",ptr+i, *(ptr+i));
free (ptr);
}  // release allocated memory
