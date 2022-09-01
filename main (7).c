

#include <stdio.h>
#include<limits.h>

int main()
{   
    int a[10];
    printf("Enter the 10 array elements:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int temp1= INT_MIN;
    int temp2=INT_MIN;
    for(int i=0;i<10;i++)
    {
        if(a[i]>temp1)
        {
            temp2=temp1;
            temp1=a[i];
        }
        else if(a[i]>temp2)
        {
            temp2=a[i];
        }
    }
    printf("The second largest element in the array is %d",temp2);

    return 0;
}
