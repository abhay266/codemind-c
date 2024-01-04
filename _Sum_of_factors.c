#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int c=n/2;
    for(i=1;i<=c;i++)
    {
        if(n%i==0){
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}