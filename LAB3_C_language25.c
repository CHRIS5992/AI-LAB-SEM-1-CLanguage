#include <stdio.h>

int main(){
    int num,a;
    printf("Enter Number :\n");
    scanf("%d",&num);
    a=num ;
    while(a>0)
    {
     printf(" %d x %d \n",num,a);
     a=a-1;
    }
    return 0;
}