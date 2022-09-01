

#include <stdio.h>
#include<limits.h>

int main()
{   
    int n;
    int a[n];
    printf("Enter the array size\n");
    scanf("%d",&n);
    printf("Enter the %d array elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=0;i<(n/2);i++)
    {
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    printf("The array after reversing the order is:\n");
    for(int i=0;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    

    return 0;
}
