

#include <stdio.h>

int main()
{
    int a[10],sum1=0,sum2=0;
    printf("Enter the 10 array elements\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
         sum1=sum1+a[i];
        else
         sum2=sum2+a[i];
    }
    
    printf("The sum of even elements is %d\n",sum1);
    printf("The sum of odd elements is %d\n",sum2);

    return 0;
}
