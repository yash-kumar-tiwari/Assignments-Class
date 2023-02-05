#include<stdio.h>
int main()
{
    int no,i,j,sum=0;
    printf("Enter the number : ");
    scanf("%d",&no);
    for(i=1;i<=no;i++)
    {
        for(j=2;j<=no;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
        {
            printf("%d ",i);
           // sum=sum+i;
        }
        //sum=sum+i;
        //printf("Sum of number : ",sum);
    }
   // printf("\nSum of number : %d",sum);
   return 0;
}