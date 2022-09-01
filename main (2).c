

#include <stdio.h>

int main()
{
    int a[10],sum=0;
    float avg;
    printf("Enter the 10 array elements\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/10.0;
    printf("The average of the 10 elements is %0.2f",avg);

    return 0;
}
