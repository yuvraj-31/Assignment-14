

#include <stdio.h>

int main()
{
    int a[10],sum=0;
    printf("Enter the 10 array elements\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("The sum of all the array elements is %d",sum);

    return 0;
}
